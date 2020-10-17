cmake_minimum_required(VERSION 3.16)
project(pythonbinding)

set(CMAKE_CXX_STANDARD 14)


include_directories("C:/Python37/include")
include_directories("D:/Program/boost_1_71_0")

link_directories("C:/Python37/libs")
link_directories("C:/Python37/Lib")
link_directories("D:/Program/boost_1_71_0/stage/lib")
link_directories("D:/Program/boost_1_71_0/lib64-msvc-14.2")

add_library(pythonbinding SHARED hello.cpp)



