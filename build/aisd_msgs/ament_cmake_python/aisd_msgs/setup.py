from setuptools import find_packages
from setuptools import setup

setup(
    name='aisd_msgs',
    version='0.0.0',
    packages=find_packages(
        include=('aisd_msgs', 'aisd_msgs.*')),
)
