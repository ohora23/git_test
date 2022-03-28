cmake_minimum_required(VERSION 3.0)
project(HelloSLAM)

set(CMAKE_BUILD_TYPE "Debug")

find_package(Eigen3 REQUIRED)

link_directories(${Eigen_INCLUDE_DIRS})


add_executable(helloSLAM helloSLAM.cpp)


add_library(hello libHelloSLAM.cpp) # add as a static library

add_library(hello_shared SHARED libHelloSLAM.cpp) # Add as a shared library


add_executable(useHello useHello.cpp)

target_link_libraries(useHello hello_shared ${Eigen_LIBRARIES})
