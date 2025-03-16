FROM --platform=linux/amd64 osrf/ros:humble-desktop

ARG USERNAME=rosuser
ARG PASSWORD=rosuser
ARG UID=1000
ARG GID=1000

VOLUME "/home/$USERNAME/workspace"

RUN apt update && apt install wget && \
    sh -c 'echo "deb http://packages.osrfoundation.org/gazebo/ubuntu-stable `lsb_release -cs` main" > /etc/apt/sources.list.d/gazebo-stable.list' && \
    wget http://packages.osrfoundation.org/gazebo.key -O - | apt-key add - && \
    apt update && apt install -y ignition-fortress

# Keep Image updated
RUN apt update && \
    apt upgrade -y

RUN apt install -y apt-transport-https

# Install helper packages
RUN apt install -y wget python3-pip ros-humble-turtlebot4-simulator ros-humble-irobot-create-nodes nano
RUN apt update && apt upgrade -y

# Create User
RUN useradd --uid $UID --create-home --shell /bin/bash rosuser && \
    echo "$USERNAME:$PASSWORD" | chpasswd && \
    adduser "$USERNAME" sudo && \
    chown -R "$USERNAME:$USERNAME" "/home/$USERNAME"

# Setup environment
USER $USERNAME
WORKDIR "/home/$USERNAME"
COPY bashrc.sh .bashrc
COPY requirements.txt requirements.txt
COPY --chmod=755 setup.sh setup.sh
COPY --chmod=755 unzipper.sh unzipper.sh
USER root
RUN chown "$USERNAME" .bashrc requirements.txt setup.sh unzipper.sh
USER $USERNAME
RUN git clone https://github.com/leonhartyao/gazebo_models_worlds_collection.git
RUN git clone https://github.com/mlherd/Dataset-of-Gazebo-Worlds-Models-and-Maps.git && \
    ./unzipper.sh

RUN pip install -r requirements.txt

HEALTHCHECK CMD test -f /home/rosuser/initial_install_complete
ENTRYPOINT ["/home/rosuser/setup.sh"]
CMD ["tail", "-f", "/dev/null"]