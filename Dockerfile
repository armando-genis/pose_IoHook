# Use the TensorFlow 1.15.4 GPU-enabled base image with Python 3
FROM tensorflow/tensorflow:1.15.4-gpu-py3

# Set workspace and environment variables
ENV WS_DIR="/workspace"
WORKDIR ${WS_DIR}
ENV LANG C.UTF-8
ENV LC_ALL C.UTF-8
ENV DEBIAN_FRONTEND=noninteractive

# Add missing NVIDIA public key
RUN apt-key adv --fetch-keys https://developer.download.nvidia.com/compute/cuda/repos/ubuntu1804/x86_64/3bf863cc.pub

# Set up timezone
RUN echo 'Etc/UTC' > /etc/timezone && \
    apt-get update && \
    apt-get install -q -y --no-install-recommends tzdata && \
    rm -rf /var/lib/apt/lists/*

# Install SO dependencies
RUN apt-get update -qq && \
    apt-get install -y \
    build-essential \
    cmake \
    g++ \
    git \
    libgtk2.0-dev \
    libgtk-3-dev \
    pkg-config \
    iputils-ping \
    wget \
    python3-pip \
    python3-dev \
    libtool \
    libpcap-dev \
    git-all \
    libeigen3-dev \
    libpcl-dev \
    software-properties-common \
    bash-completion \
    curl \
    tmux \
    zsh \
    nano \
    && rm -rf /var/lib/apt/lists/*

# Upgrade pip to the latest version
RUN python3 -m pip install --upgrade pip

# Set up zsh with Oh My Zsh
RUN sh -c "$(curl -fsSL https://raw.githubusercontent.com/ohmyzsh/ohmyzsh/master/tools/install.sh)" "" --unattended && \
    chsh -s $(which zsh)

# Set up a default .zshrc configuration with color support and green directory
RUN echo 'export TERM=xterm-256color' >> ~/.zshrc && \
    echo 'alias ll="ls -alF"' >> ~/.zshrc && \
    echo 'alias la="ls -A"' >> ~/.zshrc && \
    echo 'alias l="ls -CF"' >> ~/.zshrc && \
    echo 'export ZSH_THEME="robbyrussell"' >> ~/.zshrc && \
    echo 'PROMPT="%F{green}%~%f %F{blue}➜%f "' >> ~/.zshrc

# Set up tmux configuration
RUN echo 'set -g default-terminal "screen-256color"' >> ~/.tmux.conf && \
    echo 'set -g mouse on' >> ~/.tmux.conf

# Install ROS2 Eloquent
RUN curl -s https://raw.githubusercontent.com/ros/rosdistro/master/ros.asc | apt-key add - && \
    echo "deb [arch=amd64,arm64] http://packages.ros.org/ros2/ubuntu bionic main" > /etc/apt/sources.list.d/ros2-eloquent.list && \
    apt-get update && \
    apt-get install -y ros-eloquent-desktop && \
    echo "source /opt/ros/eloquent/setup.zsh" >> ~/.zshrc

# Clean up
RUN apt-get autoremove -y \
    && apt-get clean -y \
    && rm -rf /var/lib/apt/lists/*

# Set up OpenGL for headless display with Xvfb
RUN mkdir -p /root/.config/matplotlib && \
    echo "backend: TkAgg" > /root/.config/matplotlib/matplotlibrc

RUN apt-get update && apt-get install -y xvfb

# Default command to start zsh with headless OpenGL
CMD ["/bin/bash", "-c", "Xvfb :99 -screen 0 1920x1080x24 & export DISPLAY=:99 && zsh"]
