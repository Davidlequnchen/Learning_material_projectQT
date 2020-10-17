#ifndef BOOSTPYTHON_EXAMPLE_LIBRARY_H
#define BOOSTPYTHON_EXAMPLE_LIBRARY_H


#define BOOST_PYTHON_STATIC_LIB
//#include <QObject>
//#include <QTimer>
#include <boost/python/module.hpp>
#include <boost/python/def.hpp>
#include <iostream>
#include <boost/python.hpp>

class Message
{
public:
    void set(std::string msg);

    std::string get();

    void hello();


private:
    std::string msg;
};

//1.在模块中加入常量属性
BOOST_PYTHON_MODULE(boost_python)
        {
                //const
                boost::python::scope().attr("yes") = 1;
                boost::python::scope().attr("no") = 0;

                boost::python::class_<Message>("Message")
                .def("set", &Message::set)
                .def("get", &Message::get);
        }



#endif //BOOSTPYTHON_EXAMPLE_LIBRARY_H
