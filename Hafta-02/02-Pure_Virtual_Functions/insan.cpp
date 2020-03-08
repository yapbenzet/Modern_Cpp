//
// Created by atuash on 8.03.2020.
//

#include "insan.h"

Insan::~Insan() {

}

void Insan::goster() const{
    std::cout << isim << "," << yas << std::endl;
}

const std::string &Insan::getIsim() const {
    return isim;
}

int Insan::getYas() const {
    return yas;
}

void Insan::setIsim(const std::string &isim) {
    Insan::isim = isim;
}

void Insan::setYas(int yas) {
    Insan::yas = yas;
}

/////////////////////////////////////////////////////////////////////////////

Ogrenci::~Ogrenci() {

}

void Ogrenci::goster() const{
    std::cout << bolum << std::endl;
}

const std::string &Ogrenci::getBolum() const {
    return bolum;
}

void Ogrenci::setBolum(const std::string &bolum) {
    Ogrenci::bolum = bolum;
}


