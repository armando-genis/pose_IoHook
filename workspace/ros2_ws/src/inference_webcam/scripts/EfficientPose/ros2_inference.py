#!/usr/bin/env python3

import rclpy
from rclpy.node import Node
from sensor_msgs.msg import Image
from cv_bridge import CvBridge

from geometry_msgs.msg import TransformStamped 
from tf2_ros import TransformBroadcaster
from scipy.spatial.transform import Rotation as R  

import cv2
import numpy as np
import os
import math

import tensorflow as tf

from model import build_EfficientPose
from utils import preprocess_image
from utils.visualization import draw_detections

class ImageSubscriber(Node):
    def __init__(self):
        super().__init__('image_subscriber')

        # Initialize the transform broadcaster
        self.tfbroadcaster = TransformBroadcaster(self)

        os.environ['CUDA_VISIBLE_DEVICES'] = '-1'
        self.allow_gpu_growth_memory()

        # Initialize CvBridge
        self.bridge = CvBridge()
        self.get_logger().info("Image Subscriber Node Initialized.")

        self.phi = 0
        self.path_to_weights = "/workspace/object_1/phi_0_linemod_best_ADD.h5"
        self.save_path = None
        self.image_extension = ".jpg"
        self.class_to_name = {0: "ape"}
        self.score_threshold = 0.9
        self.translation_scale_norm = 1000.0
        self.draw_bbox_2d = False
        self.draw_name = False

        self.camera_matrix = self.get_linemod_camera_matrix()
        self.name_to_3d_bboxes = self.get_linemod_3d_bboxes()

        self.class_to_3d_bboxes = {class_idx: self.name_to_3d_bboxes[name] for class_idx, name in self.class_to_name.items()}

        self.num_classes = len(self.class_to_name)

        self.webcam = cv2.VideoCapture(0)

        #build model and load weights
        self.model, self.image_size = self.build_model_and_load_weights(self.phi, self.num_classes, self.score_threshold, self.path_to_weights)

        self.subscription = self.create_subscription( Image, '/camera/image',
            self.image_callback,
            10)
        self.subscription  # prevent unused variable warning

    def image_callback(self, msg):
        # Convert ROS Image message to OpenCV image
        try:
            # cv_image = self.bridge.imgmsg_to_cv2(msg, "bgr8")
            got_image, cv_image = self.webcam.read()
            self.get_logger().info("Received image")
        except Exception as e:
            self.get_logger().error(f"Failed to convert image: {e}")
            return

        original_image = cv_image.copy()
        #preprocessing
        input_list, scale = self.preprocess(cv_image, self.image_size, self.camera_matrix, self.translation_scale_norm)
        #predict
        boxes, scores, labels, rotations, translations = self.model.predict_on_batch(input_list)

        #postprocessing
        boxes, scores, labels, rotations, translations = self.postprocess(boxes, scores, labels, rotations, translations, scale, self.score_threshold)

        draw_detections(original_image,
                    boxes,
                    scores,
                    labels,
                    rotations,
                    translations,
                    class_to_bbox_3D = self.class_to_3d_bboxes,
                    camera_matrix = self.camera_matrix,
                    label_to_name = self.class_to_name,
                    draw_bbox_2d = self.draw_bbox_2d,
                    draw_name = self.draw_name)

        print("HELOOOOOO")
        print(scores)

        # Broadcast the object's pose if at least one detection exists
        if translations.shape[0] > 0:
            translation = translations[0]
            rotation = rotations[0]

            t = TransformStamped()
            t.header.stamp = self.get_clock().now().to_msg()
            t.header.frame_id = 'camera_link'
            t.child_frame_id = "detected_object"

            t.transform.translation.x = translation[0] / self.translation_scale_norm
            t.transform.translation.y = translation[1] / self.translation_scale_norm
            t.transform.translation.z = translation[2] / self.translation_scale_norm

            # Convert Euler angles to quaternion using scipy
            quaternion = R.from_euler('xyz', rotation).as_quat()
            t.transform.rotation.x = quaternion[0]
            t.transform.rotation.y = quaternion[1]
            t.transform.rotation.z = quaternion[2]
            t.transform.rotation.w = quaternion[3]

            self.tfbroadcaster.sendTransform(t)




        # Display the image
        cv2.imshow("Received Image", original_image)
        cv2.waitKey(1)

    def allow_gpu_growth_memory(self):
        """
            Set allow growth GPU memory to true

        """
        config = tf.ConfigProto()
        config.gpu_options.allow_growth = True
        _ = tf.Session(config = config)

    def get_linemod_camera_matrix(self):
        """
        Returns:
            The Linemod and Occlusion 3x3 camera matrix (mm)

        """
        # return np.array([[1.10404015e+05, 0.00000000e+00, 1.88036486e+04], 
        #          [0.00000000e+00, 1.07622264e+05, 6.12375686e+03], 
        #          [0.00000000e+00, 0.00000000e+00, 1.00000000e+00]], dtype=np.float32)

        return np.array([[572.4114, 0., 325.2611], [0., 573.57043, 242.04899], [0., 0., 1.]], dtype = np.float32)



    def get_linemod_3d_bboxes(self):
        """
        Returns:
            name_to_3d_bboxes: Dictionary with the Linemod and Occlusion 3D model names as keys and the cuboids as values

        """
        name_to_model_info = {"ape":            {"diameter": 343.42247946, "min_x": -49.64, "min_y": -113.615, "min_z": -118.795, "size_x": 99.28, "size_y": 227.23, "size_z": 237.59},
                                "benchvise":    {"diameter": 247.50624233, "min_x": -107.83500000, "min_y": -60.92790000, "min_z": -109.70500000, "size_x": 215.67000000, "size_y": 121.85570000, "size_z": 219.41000000},
                                "cam":          {"diameter": 172.49224865, "min_x": -68.32970000, "min_y": -71.51510000, "min_z": -50.24850000, "size_x": 136.65940000, "size_y": 143.03020000, "size_z": 100.49700000},
                                "can":          {"diameter": 201.40358597, "min_x": -50.39580000, "min_y": -90.89790000, "min_z": -96.86700000, "size_x": 100.79160000, "size_y": 181.79580000, "size_z": 193.73400000},
                                "cat":          {"diameter": 154.54551808, "min_x": -33.50540000, "min_y": -63.81650000, "min_z": -58.72830000, "size_x": 67.01070000, "size_y": 127.63300000, "size_z": 117.45660000},
                                "driller":      {"diameter": 261.47178102, "min_x": -114.73800000, "min_y": -37.73570000, "min_z": -104.00100000, "size_x": 229.47600000, "size_y": 75.47140000, "size_z": 208.00200000},
                                "duck":         {"diameter": 108.99920102, "min_x": -52.21460000, "min_y": -38.70380000, "min_z": -42.84850000, "size_x": 104.42920000, "size_y": 77.40760000, "size_z": 85.69700000},
                                "eggbox":       {"diameter": 164.62758848, "min_x": -75.09230000, "min_y": -53.53750000, "min_z": -34.62070000, "size_x": 150.18460000, "size_y": 107.07500000, "size_z": 69.24140000},
                                "glue":         {"diameter": 175.88933422, "min_x": -18.36050000, "min_y": -38.93300000, "min_z": -86.40790000, "size_x": 36.72110000, "size_y": 77.86600000, "size_z": 172.81580000},
                                "holepuncher":  {"diameter": 145.54287471, "min_x": -50.44390000, "min_y": -54.24850000, "min_z": -45.40000000, "size_x": 100.88780000, "size_y": 108.49700000, "size_z": 90.80000000},
                                "iron":         {"diameter": 278.07811733, "min_x": -129.11300000, "min_y": -59.24100000, "min_z": -70.56620000, "size_x": 258.22600000, "size_y": 118.48210000, "size_z": 141.13240000},
                                "lamp":         {"diameter": 282.60129399, "min_x": -101.57300000, "min_y": -58.87630000, "min_z": -106.55800000, "size_x": 203.14600000, "size_y": 117.75250000, "size_z": 213.11600000},
                                "phone":        {"diameter": 212.35825148, "min_x": -46.95910000, "min_y": -73.71670000, "min_z": -92.37370000, "size_x": 93.91810000, "size_y": 147.43340000, "size_z": 184.74740000}}
            
        name_to_3d_bboxes = {name: self.convert_bbox_3d(model_info) for name, model_info in name_to_model_info.items()}
        
        return name_to_3d_bboxes
        
    def convert_bbox_3d(self,model_dict):
        """
        Converts the 3D model cuboids from the Linemod format (min_x, min_y, min_z, size_x, size_y, size_z) to the (num_corners = 8, num_coordinates = 3) format
        Args:
            model_dict: Dictionary containing the cuboid information of a single Linemod 3D model in the Linemod format
        Returns:
            bbox: numpy (8, 3) array containing the 3D model's cuboid, where the first dimension represents the corner points and the second dimension contains the x-, y- and z-coordinates.

        """
        #get infos from model dict
        min_point_x = model_dict["min_x"]
        min_point_y = model_dict["min_y"]
        min_point_z = model_dict["min_z"]
        
        size_x = model_dict["size_x"]
        size_y = model_dict["size_y"]
        size_z = model_dict["size_z"]
        
        bbox = np.zeros(shape = (8, 3))
        #lower level
        bbox[0, :] = np.array([min_point_x, min_point_y, min_point_z])
        bbox[1, :] = np.array([min_point_x + size_x, min_point_y, min_point_z])
        bbox[2, :] = np.array([min_point_x + size_x, min_point_y + size_y, min_point_z])
        bbox[3, :] = np.array([min_point_x, min_point_y + size_y, min_point_z])
        #upper level
        bbox[4, :] = np.array([min_point_x, min_point_y, min_point_z + size_z])
        bbox[5, :] = np.array([min_point_x + size_x, min_point_y, min_point_z + size_z])
        bbox[6, :] = np.array([min_point_x + size_x, min_point_y + size_y, min_point_z + size_z])
        bbox[7, :] = np.array([min_point_x, min_point_y + size_y, min_point_z + size_z])
        
        return bbox

    def build_model_and_load_weights(self, phi, num_classes, score_threshold, path_to_weights):
        """
        Builds an EfficientPose model and init it with a given weight file
        Args:
            phi: EfficientPose scaling hyperparameter
            num_classes: The number of classes
            score_threshold: Minimum score threshold at which a prediction is not filtered out
            path_to_weights: Path to the weight file
            
        Returns:
            efficientpose_prediction: The EfficientPose model
            image_size: Integer image size used as the EfficientPose input resolution for the given phi

        """
        print("\nBuilding model...\n")
        _, efficientpose_prediction, _ = build_EfficientPose(phi,
                                                            num_classes = num_classes,
                                                            num_anchors = 9,
                                                            freeze_bn = True,
                                                            score_threshold = score_threshold,
                                                            num_rotation_parameters = 3,
                                                            print_architecture = False)
        
        print("\nDone!\n\nLoading weights...")
        efficientpose_prediction.load_weights(path_to_weights, by_name=True)
        print("Done!")
        
        image_sizes = (512, 640, 768, 896, 1024, 1280, 1408)
        image_size = image_sizes[phi]
        
        return efficientpose_prediction, image_size

    def preprocess(self, image, image_size, camera_matrix, translation_scale_norm):
        """
        Preprocesses the inputs for EfficientPose
        Args:
            image: The image to predict
            image_size: Input resolution for EfficientPose
            camera_matrix: numpy 3x3 array containing the intrinsic camera parameters
            translation_scale_norm: factor to change units. EfficientPose internally works with meter and if your dataset unit is mm for example, then you need to set this parameter to 1000
            
        Returns:
            input_list: List containing the preprocessed inputs for EfficientPose
            scale: The scale factor of the resized input image and the original image

        """
        image = image[:, :, ::-1]
        image, scale = preprocess_image(image, image_size)
        camera_input = self.get_camera_parameter_input(camera_matrix, scale, translation_scale_norm)
        
        image_batch = np.expand_dims(image, axis=0)
        camera_batch = np.expand_dims(camera_input, axis=0)
        input_list = [image_batch, camera_batch]
        
        return input_list, scale

    def get_camera_parameter_input(self, camera_matrix, image_scale, translation_scale_norm):
        """
        Return the input vector for the camera parameter layer
        Args:
            camera_matrix: numpy 3x3 array containing the intrinsic camera parameters
            image_scale: The scale factor of the resized input image and the original image
            translation_scale_norm: factor to change units. EfficientPose internally works with meter and if your dataset unit is mm for example, then you need to set this parameter to 1000
            
        Returns:
            input_vector: numpy array [fx, fy, px, py, translation_scale_norm, image_scale]

        """
        #input_vector = [fx, fy, px, py, translation_scale_norm, image_scale]
        input_vector = np.zeros((6,), dtype = np.float32)
        
        input_vector[0] = camera_matrix[0, 0]
        input_vector[1] = camera_matrix[1, 1]
        input_vector[2] = camera_matrix[0, 2]
        input_vector[3] = camera_matrix[1, 2]
        input_vector[4] = translation_scale_norm
        input_vector[5] = image_scale
        
        return input_vector

    def postprocess(self, boxes, scores, labels, rotations, translations, scale, score_threshold):
        """
        Filter out detections with low confidence scores and rescale the outputs of EfficientPose
        Args:
            boxes: numpy array [batch_size = 1, max_detections, 4] containing the 2D bounding boxes
            scores: numpy array [batch_size = 1, max_detections] containing the confidence scores
            labels: numpy array [batch_size = 1, max_detections] containing class label
            rotations: numpy array [batch_size = 1, max_detections, 3] containing the axis angle rotation vectors
            translations: numpy array [batch_size = 1, max_detections, 3] containing the translation vectors
            scale: The scale factor of the resized input image and the original image
            score_threshold: Minimum score threshold at which a prediction is not filtered out
        Returns:
            boxes: numpy array [num_valid_detections, 4] containing the 2D bounding boxes
            scores: numpy array [num_valid_detections] containing the confidence scores
            labels: numpy array [num_valid_detections] containing class label
            rotations: numpy array [num_valid_detections, 3] containing the axis angle rotation vectors
            translations: numpy array [num_valid_detections, 3] containing the translation vectors

        """
        boxes, scores, labels, rotations, translations = np.squeeze(boxes), np.squeeze(scores), np.squeeze(labels), np.squeeze(rotations), np.squeeze(translations)
        # correct boxes for image scale
        boxes /= scale
        #rescale rotations
        rotations *= math.pi
        #filter out detections with low scores
        indices = np.where(scores[:] > score_threshold)
        # select detections
        scores = scores[indices]
        boxes = boxes[indices]
        rotations = rotations[indices]
        translations = translations[indices]
        labels = labels[indices]
        
        return boxes, scores, labels, rotations, translations

def main(args=None):
    rclpy.init(args=args)
    node = ImageSubscriber()
    try:
        rclpy.spin(node)
    except KeyboardInterrupt:
        pass
    finally:
        node.destroy_node()
        rclpy.shutdown()
        cv2.destroyAllWindows()

if __name__ == '__main__':
    main()
