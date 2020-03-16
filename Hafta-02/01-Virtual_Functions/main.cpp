#include <iostream>

#include "insan.h"

int main()
{
    Insan *i1 = new Insan;
    Insan *i2 = new Ogrenci;
    Ogrenci *o1 = new Ogrenci;
    //Ogrenci *o2 = new Insan;  // Hata verir.

    i1->setIsim("ahmet");
    i2->setIsim("mehmet");
    //i2->setBolum("Bilgisayar Muhendisligi");    // Hata verir
    o1->setIsim("veli");
    o1->setBolum("Bilgisayar Muhendisligi");

    i1->goster();
    i2->goster();
    o1->goster();

    delete i1;
    delete i2;
    delete o1;
}
