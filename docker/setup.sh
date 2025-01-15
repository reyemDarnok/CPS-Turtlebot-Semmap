#!/usr/bin/env bash
echo "$@"
rosdep update
pushd workspace || exit 1
./update_ros.sh
source install/setup.sh
popd || exit 1
touch ~/initial_install_complete
# execute CMD
exec "$@"