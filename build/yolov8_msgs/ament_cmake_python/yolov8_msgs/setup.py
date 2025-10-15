from setuptools import find_packages
from setuptools import setup

setup(
    name='yolov8_msgs',
    version='0.0.0',
    packages=find_packages(
        include=('yolov8_msgs', 'yolov8_msgs.*')),
)
