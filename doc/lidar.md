# RPLidar


Dependency:
```
sudo apt-get install ros-melodic-rviz
```


Install the RPLidar and run it:
```
mkdir -p ~/catkin_ws/src
cd ~/catkin_ws/src
git clone  https://github.com/robopeak/rplidar_ros.git
cd .. && catkin_make && source devel/setup.bash
roslaunch rplidar_ros view_rplidar.launch
```

Important:
The Lidar is sensitive to the quality of cables. Please use high quality cables.