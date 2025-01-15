source /opt/ros/humble/setup.bash
# shellcheck disable=SC2155
export PATH="$PATH:/home/$(whoami)/.local/bin"
if [ -f "/home/$(whoami)/workspace/install/setup.bash" ]
then
  # shellcheck disable=SC1090
  source "/home/$(whoami)/workspace/install/setup.bash"
fi