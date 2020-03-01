# IntelRealsense D435 setup

## Dependencies
```
sudo apt-key adv --keyserver keys.gnupg.net --recv-key F6E65AC044F831AC80A06380C8B3A55A6F3EFCDE || sudo apt-key adv --keyserver hkp://keyserver.ubuntu.com:80 --recv-key
sudo add-apt-repository "deb http://realsense-hw-public.s3.amazonaws.com/Debian/apt-repo bionic main" -u

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
