# IntelRealsense D435 setup

## Dependencies
```
sudo apt install librealsense2-utils
sudo apt install ros-melodic-realsense2-camera
```

## Run the camera node
```
mkdir -p catkin_ws/src
cd catkin_ws/src
git clone https://github.com/IntelRealSense/realsense-ros.git
cd .. && catkin_make && source devel/setup.bash

roslaunch realsense2_camera rs_camera.launch
```