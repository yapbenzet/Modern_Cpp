#include <iostream>

#include "sinif.h"

int main() {

    sinif *snf = new sinif();                           // Icerisinde  int, double, char, string, vector degiskenlerini iceren bir siniftir.

    auto i = snf->i;                                    // auto degiskenini olustururken bir degere veya degiskene esitlemek gerekir.
    auto d = snf->d;                                    // Boylece butun esitlendigi degerin veya degiskenin butun ozelliklerini alir.
    auto c = snf->c;
    auto s = snf->s;
    auto v = snf->v;

    cout << "Integer: " << i << endl;
    cout << "Double: " << d << endl;
    cout << "Char: " << c << endl;
    cout << "String:" << s << endl;
    cout << "Vector Size: " << v.size() << endl;

    for (int j = 0; j < v.size(); ++j) {
        cout << "Vector"  << j << ". elemani: " << v.at(j) << endl;
    }

    return 0;
}
