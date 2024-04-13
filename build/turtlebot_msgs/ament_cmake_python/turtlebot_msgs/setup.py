from setuptools import find_packages
from setuptools import setup

setup(
    name='turtlebot_msgs',
    version='2.2.1',
    packages=find_packages(
        include=('turtlebot_msgs', 'turtlebot_msgs.*')),
)
