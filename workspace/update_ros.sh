#!/usr/bin/env bash
rosdep update
rosdep install --from-paths src --ignore-src -r --rosdistro humble -y
colcon build --symlink-install
source install/local_setup.bash
