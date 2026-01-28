## Vision_Motion_ROS

A real-robot robotics project combining **computer vision** and **ROS motion control** to enable vision-guided robotic behavior with a physical robot platform.  
This repository contains ROS packages, message definitions, motion control nodes, and vision integration for a working robot setup.

### Real Robot Integration

Unlike many simulation-only ROS projects, this repo was developed and tested on an **actual robot** using ROS. The vision pipelines and motion nodes were deployed to a physical robot system, enabling perception-based actions in the real world (camera input → ROS vision processing → motion execution). This bridges real-time sensing and robot control not just in theory but in practice.

### Repository Contents

```text
Vision_Motion_ROS/
├── aisd_hearing/         # Hearing / audio perception nodes
├── aisd_motions/         # Motion / action control ROS nodes
├── aisd_msgs/            # ROS message definitions
├── aisd_speaking/        # Speech / dialog nodes
├── aisd_vision/          # Vision perception / camera processing
├── build/                # Build artifacts (ROS workspace)
├── install/              # Installed ROS packages
├── log/                  # ROS build / runtime logs
├── CMakeLists.txt        # ROS workspace build config
├── package.xml           # ROS package metadata
└── ...                   # Other ROS workspace files

``` 
### Features

Vision perception nodes to process camera data and publish ROS topics  
Motion control nodes that interpret perception data and actuate robot motion  
Custom ROS messages for sensor and action interfaces  
Real-robot deployment setup using ROS  
Modular components for hearing, vision, speaking, and actions

### Setup and Build (ROS 1/ROS 2)

> These instructions assume you have ROS installed, and that your workspace has been sourced correctly.

```
1. Clone the repo:
cd ~/your_ros_workspace/src
git clone https://github.com/ByteWithShub/Vision_Motion_ROS.git

2.  Build your workplace
cd ~/your_ros_workspace
colcon build

3. Source the workspace:
source install/setup.bash

4. Launch your system using included launch scripts:
ros2 launch aisd_vision vision_launch.py
ros2 launch aisd_motions motion_launch.py
```

### What You Can Do With This

- Vision-guided motion control pipelines
- Robotics demo with real camera input and actuator output
- Integration of perception + decision + action in ROS
- Modular ROS packages for multi-modal UX (vision, hearing, motion)

### Real-Robot Results

This project goes beyond simulation by running on an actual robot platform, meaning:
- Camera images processed in real time
- ROS topics streamed between perception and motion nodes
- Motion commands executed on actual hardware
- Feedback loops between vision, planning, and control

### Dependencies 
- ROS (Noetic / ROS2)
- OpenCV
- colcon / catkin tools
- Camera drivers (USB/ROS compatible)
- Robot motion controller ROS drivers

Author: 
_Shubhangi Singh
Vision + Motion + ROS developer_

