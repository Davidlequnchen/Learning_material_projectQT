//
// Created by David Chen Lequn on 8/18/2020.
//

#define BOOST_PYTHON_STATIC_LIB
#include <boost/python/module.hpp>
#include <boost/python/def.hpp>
using namespace boost::python;


char const* greet(){
    return "hello, world";
}


int Add(const int x, const int y)
{
 return x + y;
}

int Del(const int x, const int y)
{
 return x - y;
}

BOOST_PYTHON_MODULE(hello_ext)
{
    def("greet", greet);
    def("Add", Add);
    def("Del", Del);

}