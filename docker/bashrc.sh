source /opt/ros/humble/setup.bash
# shellcheck disable=SC2155
export PATH="$PATH:/home/$(whoami)/.local/bin:."
if [ -f "/home/$(whoami)/workspace/install/setup.bash" ]
then
  # shellcheck disable=SC1090
  source "/home/$(whoami)/workspace/install/setup.bash"
fi
export TURTLEBOT3_MODEL=burger
GAZEBO_MODEL_PATH=$GAZEBO_MODEL_PATH:/home/"$(whoami)"gazebo_models_worlds_collection/models:$(ros2 pkg prefix turtlebot3_gazebo)/share/turtlebot3_gazebo/models/
GAZEBO_RESOURCE_PATH=$GAZEBO_RESOURCE_PATH:/home/"$(whoami)"gazebo_models_worlds_collection/worlds
export GAZEBO_MODEL_PATH
export GAZEBO_RESOURCE_PATH