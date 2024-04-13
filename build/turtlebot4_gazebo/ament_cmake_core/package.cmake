set(_AMENT_PACKAGE_NAME "turtlebot4_gazebo")
set(turtlebot4_gazebo_VERSION "2.2.3")
set(turtlebot4_gazebo_MAINTAINER "Will Son <willson@robotis.com>")
set(turtlebot4_gazebo_BUILD_DEPENDS "gazebo_ros_pkgs" "geometry_msgs" "nav_msgs" "rclcpp" "sensor_msgs" "tf2")
set(turtlebot4_gazebo_BUILDTOOL_DEPENDS "ament_cmake")
set(turtlebot4_gazebo_BUILD_EXPORT_DEPENDS "gazebo_ros_pkgs" "geometry_msgs" "nav_msgs" "rclcpp" "sensor_msgs" "tf2")
set(turtlebot4_gazebo_BUILDTOOL_EXPORT_DEPENDS )
set(turtlebot4_gazebo_EXEC_DEPENDS "turtlebot3_description" "gazebo_ros_pkgs" "geometry_msgs" "nav_msgs" "rclcpp" "sensor_msgs" "tf2")
set(turtlebot4_gazebo_TEST_DEPENDS )
set(turtlebot4_gazebo_GROUP_DEPENDS )
set(turtlebot4_gazebo_MEMBER_OF_GROUPS )
set(turtlebot4_gazebo_DEPRECATED "")
set(turtlebot4_gazebo_EXPORT_TAGS)
list(APPEND turtlebot4_gazebo_EXPORT_TAGS "<build_type>ament_cmake</build_type>")
list(APPEND turtlebot4_gazebo_EXPORT_TAGS "<gazebo_ros gazebo_model_path=\"models\"/>")
