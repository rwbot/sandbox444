# Author: Ankush Gupta
# Date  : 24th August, 2012

cmake_minimum_required(VERSION 2.6)
set(CMAKE_MODULE_PATH ${CMAKE_MODULE_PATH} "${CMAKE_SOURCE_DIR}/CMakeModules")

# EXTERNAL LIBRARIES
find_package(Eigen3 REQUIRED)
add_definitions("-DEIGEN_DEFAULT_TO_ROW_MAJOR")

include_directories(${EIGEN3_INCLUDE_DIR})
add_executable(test test.cpp)
#############################################################
