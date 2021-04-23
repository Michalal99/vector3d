cmake_minimum_required(VERSION 3.17)
project(vector3d)

set(CMAKE_CXX_STANDARD 14)
#target_include_directories(main.cpp PUBLIC Eigen)
find_package (Eigen3 3.3 REQUIRED NO_MODULE)
add_executable(vector3d main.cpp)
target_link_libraries (vector3d Eigen3::Eigen)
