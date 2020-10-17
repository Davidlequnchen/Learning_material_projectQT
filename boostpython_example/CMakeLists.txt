cmake_minimum_required(VERSION 3.16)
project(boostpython)

set(CMAKE_CXX_STANDARD 14)

include_directories("C:/Python37/include")
include_directories("D:/Program/boost_1_71_0")

link_directories("C:/Python37/libs")
link_directories("C:/Python37/Lib")
link_directories("D:/Program/boost_1_71_0/stage/lib")
link_directories("D:/Program/boost_1_71_0/lib64-msvc-14.2")

#ADD_DEFINITIONS(-DQT_NO_KEYWORDS)

add_library(boostpython SHARED library.cpp library.h)