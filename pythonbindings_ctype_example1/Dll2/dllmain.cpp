// dllmain.cpp : Defines the entry point for the DLL application.
#define EXPORT __declspec(dllexport)
#include "pch.h"
#include<iostream>
using namespace std;

class TestDLL {
public:
    void hello();
};
void TestDLL::hello() {
    cout << "hello world" << endl;
}



extern "C" {
    TestDLL td;
    EXPORT void hello() {
        td.hello();
    }

    EXPORT void hello1() {
        cout << "hello world 111111" << endl;
    }
}
