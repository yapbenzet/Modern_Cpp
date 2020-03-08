#include <iostream>

#include "sinif.h"

using namespace std;

int main()
{
    //Base *b1 = new Base;    // Hata verir.
    Base *b2 = new Derived;
    Derived *d2 = new Derived;

    b2->fun();
    d2->fun();
}
