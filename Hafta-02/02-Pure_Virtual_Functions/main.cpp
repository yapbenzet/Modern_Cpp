#include <iostream>

#include "insan.h"

using namespace std;

int main()
{
    //Insan *i1 = new Insan;    // Hata verir.
    Insan *i2 = new Ogrenci;
    Ogrenci *o1 = new Ogrenci;
    //Ogrenci *o2 = new Insan;  // Hata verir.

    i2->setIsim("mehmet");
    //i2->setBolum("Bilgisayar Muhendisligi");    // Hata verir
    o1->setIsim("veli");
    o1->setBolum("Bilgisayar Muhendisligi");

    i2->goster();
    o1->goster();
}

