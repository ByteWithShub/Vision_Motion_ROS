import sys
if sys.prefix == '/usr':
    sys.real_prefix = sys.prefix
    sys.prefix = sys.exec_prefix = '/home/aisd/ros2_ws/src/aisd-vision-shubhangix/install/aisd_vision'
