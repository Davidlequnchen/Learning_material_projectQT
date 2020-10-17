//
// Created by David Chen Lequn on 8/17/2020.
//

#include <iostream>
// include  the Python.h to interface with python code
#include <Python.h>

int main() {
    Py_Initialize(); // before using python, need to call this to initialize
    PyRun_SimpleString("print('hello world')"); // execute python directives
    Py_Finalize(); // after using python, need to call this
    return 0;}