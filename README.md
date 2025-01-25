# CPS-Turtlebot-Semmap

## Build Environment

### Create Docker Image and Container
```shell
$ python3 reset_rosbox.py
```

### Then, to enter the container execute
```shell
$ docker exec -it roscontainer
$ cd workspace
```
### Setup Environment (and build modules)
```shell
$ pwd
/home/rosuser/workspace
$ ./update_ros.sh
```

## Execution

All commands must be executed in a finished environment, and should be started in order

### Environment
```shell
$ ros2 launch turtlebot3_gazebo turtlebot3_world.launch.py
```

For a sim:
```shell
$ ros2 launch turtlebot3_cartographer cartographer.launch.py use_sim_time:=True
```

For a real bot
```shell
$ ros2 run cartographer_ros occupancy_grid_node -resolution 0.05\
-publish_period_sec 1.0

$ ros2 run cartographer_ros cartographer_node -configuration_directory install/turtlebot3_cartographer/share/turtlebot3_cartographer/config -configuration_basename turtlebot3_lds_2d.lua

```

### Auxiliary
```shell
$ ros2 run semmap logs
```

### Navigation
```shell
$ ros2 run semmap position_history
```

```shell
$ ros2 run semmap pathfinding
```

### Semmap
```shell
$ ros2 run semmap object_detection
```


```shell
$ ros2 run semmap semantic_map
```



