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
COPY --chown=$USERNAME bashrc .bashrc

#RUN rosdep update

CMD ["tail", "-f", "/dev/null"]