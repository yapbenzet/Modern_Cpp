#ifndef MODERN_CPP_SINIF_H
#define MODERN_CPP_SINIF_H

#include <iostream>
#include <string>

class sinif {
public:
    int a;
    int *b;
    std::string c;

    sinif();
    sinif(int a, int b, const std::string &c);
    sinif(const sinif& s);

    void yazdir();
};


#endif //MODERN_CPP_SINIF_H
