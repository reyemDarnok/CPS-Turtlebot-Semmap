#!/usr/bin/env bash
echo "$@"
rosdep update
touch ~/initial_install_complete
# execute CMD
exec "$@"