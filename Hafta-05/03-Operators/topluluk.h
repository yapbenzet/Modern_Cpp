#ifndef MODERN_CPP_TOPLULUK_H
#define MODERN_CPP_TOPLULUK_H

#include <iostream>
#include <string>

class topluluk {
public:

    topluluk();

    topluluk(std::string isim, int katilimciSayisi);

    std::string isim;
    int katilimciSayisi;

    std::string getIsim() const;

    int getKatilimciSayisi() const;

    void setIsim(std::string isim);

    void setKatilimciSayisi(int katilimciSayisi);

    topluluk operator + (const topluluk& t) const;
    bool operator > (const topluluk& t) const;
    bool operator < (const topluluk& t) const;
    bool operator == (const topluluk& t)const;
    bool operator >= (const topluluk& t)const;
    bool operator <= (const topluluk& t)const;
};


#endif //MODERN_CPP_TOPLULUK_H
