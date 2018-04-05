cmake_minimum_required (VERSION 2.6)
project(vision_detection)

# Extra C++-Flags to execute openCV librarys
find_package(OpenCV REQUIRED)
# The version number.
set (Testing_VERSION_MAJOR 1)
set (Testing_VERSION_MINOR 0)

add_executable(detect src/detect_cam.cpp src/detect_cam.h)
target_link_libraries(detect ${OpenCV_LIBS})
