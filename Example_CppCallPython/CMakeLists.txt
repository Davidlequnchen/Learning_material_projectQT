cmake_minimum_required(VERSION 3.16)
project(Example_CppCallPython)

set(CMAKE_CXX_STANDARD 11)

# Include the python path. Python is written based on C++, so can directly include its header files
include_directories(C:\\Python37\\include) # need to note in windows directory should use \\ or /
# add the python python37.lib file
link_libraries(C:/Python37/libs/python37.lib)

add_executable(Example_CppCallPython main.cpp)