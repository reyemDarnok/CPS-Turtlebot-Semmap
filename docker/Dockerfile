FROM osrf/ros:humble-desktop

ARG USERNAME=rosuser
ARG PASSWORD=rosuser
ARG UID=1000
ARG GID=1000

VOLUME "/home/$USERNAME"

# Keep Image updated
RUN apt update && \
    apt upgrade -y

# Install helper packages
RUN apt install -y vim python-pip

# Create User
RUN useradd --uid $UID --create-home --shell /bin/bash rosuser && \
    echo "$USERNAME:$PASSWORD" | chpasswd && \
    adduser "$USERNAME" sudo && \
    chown "$USERNAME:$USERNAME" "/home/$USERNAME"

# Setup environment
USER $USERNAME
WORKDIR "/home/$USERNAME"
COPY bashrc .bashrc
COPY requirements.txt requirements.txt

RUN rosdep update

# install python dependencies
RUN pip install -r requirements.txt

CMD ["tail", "-f", "/dev/null"]