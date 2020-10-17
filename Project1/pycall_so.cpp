#define DLLEXPORT extern "C" __declspec(dllexport)
#include"pycall.h"
//两数相加
DLLEXPORT int  sum(int a, int b) {
    return a + b;
}
//两数相减
DLLEXPORT int sub(int a, int b) {
    return a - b;
}