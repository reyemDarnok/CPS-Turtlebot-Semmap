FROM --platform=linux/amd64 osrf/ros:humble-desktop

ARG USERNAME=rosuser
ARG PASSWORD=rosuser
ARG UID=1000
ARG GID=1000

VOLUME "/home/$USERNAME/workspace"

# Keep Image updated
RUN apt update && \
    apt upgrade -y

# Install helper packages
RUN apt install -y vim python3-pip

# Create User
RUN useradd --uid $UID --create-home --shell /bin/bash rosuser && \
    echo "$USERNAME:$PASSWORD" | chpasswd && \
    adduser "$USERNAME" sudo && \
    chown -R "$USERNAME:$USERNAME" "/home/$USERNAME"

# Setup environment
USER $USERNAME
WORKDIR "/home/$USERNAME"
COPY bashrc .bashrc
COPY requirements.txt requirements.txt
RUN pip install -r requirements.txt
COPY --chmod=755 setup.sh setup.sh

HEALTHCHECK CMD test -f /home/rosuser/initial_install_complete
ENTRYPOINT ["/home/rosuser/setup.sh"]
CMD ["tail", "-f", "/dev/null"]