#include <iostream>
#include <thread>
#include <string>

#include "sinif.h"

void yazdir(int sayi)
{
    for (int i = 0; i < sayi; ++i) {
        cout << i << endl;
    }
}

int main(){

    sinif *snf = new sinif();
    std::thread alt_islem(yazdir, snf->sayi);
    alt_islem.join();
    return 0;
}