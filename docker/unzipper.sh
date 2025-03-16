#!/usr/bin/env bash

REPO_PATH="/home/$(whoami)/Dataset-of-Gazebo-Worlds-Models-and-Maps"

for file in "$REPO_PATH"/worlds/*/*.zip
do
  unzip "$file" -d "$(dirname $file)"
  base=$(basename file)
  printf "GAZEBO_MODEL_PATH="'"'"$GAZEBO_MODEL_PATH"'"'":/home/%s/models/%s/models/\n" "$(whoami)" "${base%.*}" >> .bashrc
done
printf "export GAZEBO_MODEL_PATH\n" >> .bashrc