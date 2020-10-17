#include "library.h"

#include <iostream>

void Message::hello() {
    std::cout << "Hello, World!" << std::endl;
}


void Message::set(std::string msg)
{
    this->msg = msg;
}

std::string Message::get()
{
    return this->msg;
}

