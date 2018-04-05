cmake_minimum_required (VERSION 2.6)
project(vision_detection)

# The version number.
set (Testing_VERSION_MAJOR 1)
set (Testing_VERSION_MINOR 0)

add_executable(detect src/detect_cam.cpp src/detect_cam.h)

