//
// Created by atuash on 13.04.2020.
//

#include "sinif.h"

// Simple Constructer
sinif::sinif()
{
    a = 0;
    b = new int(0);
    c = "0";
}

// Constructer Overloading
sinif::sinif(int a, int b, const std::string &c) : a(a), b(new int(b)), c(c) {}

//Copy Constructer
sinif::sinif(const sinif& s)
{
    a = s.a;
    b = new int(*s.b);
    c = s.c;
}

void sinif::yazdir()
{
    std::cout << "a: " << this->a << " b: " << this->b << " *b: " << *this->b << " c: " << this->c << std::endl;
}