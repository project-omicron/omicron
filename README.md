# omicron

Entry pointto the robot.

How to prepare the imge and the Jetson Nano:

follow the instructions from here:
```
https://developer.nvidia.com/embedded/learn/get-started-jetson-nano-devkit#intro
```

Please boot the jetson nao and execute the following commands:
```
git clone https;//github.com/project-omicron/omicron
cd omicron
./install dependencies.sh
cd catkin_ws && catkin_make && source devil/setup.sh
roslauch run_omicron
```
