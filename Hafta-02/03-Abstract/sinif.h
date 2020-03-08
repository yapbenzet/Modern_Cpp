//
// Created by atuash on 8.03.2020.
//

#ifndef MODERN_CPP_SINIF_H
#define MODERN_CPP_SINIF_H

#include <iostream>

class Base
{
public:
    virtual void fun() = 0;
};

/////////////////////////////////////////////////////////////////////////////

// This class inherits from Base and implements fun()
class Derived: public Base
{
public:
    void fun();
};


#endif //MODERN_CPP_SINIF_H
