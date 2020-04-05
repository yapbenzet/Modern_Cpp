#include "topluluk.h"

topluluk::topluluk() {}

topluluk::topluluk(std::string isim, int katilimciSayisi) : isim(isim), katilimciSayisi(katilimciSayisi) {}

std::string topluluk::getIsim() const
{
    return isim;
}

int topluluk::getKatilimciSayisi() const
{
    return katilimciSayisi;
}

void topluluk::setIsim(std::string isim)
{
    topluluk::isim = isim;
}

void topluluk::setKatilimciSayisi(int katilimciSayisi)
{
    topluluk::katilimciSayisi = katilimciSayisi;
}

topluluk topluluk::operator + (const topluluk& t) const
{
    topluluk sonuc;
    sonuc.setIsim(isim + t.isim);
    sonuc.setKatilimciSayisi(katilimciSayisi + t.katilimciSayisi);
    return sonuc;
}

bool topluluk::operator > (const topluluk& t) const
{
    if(katilimciSayisi > t.katilimciSayisi){ return true; }
    else{ return false; }
}

bool topluluk::operator < (const topluluk& t) const
{
    if(katilimciSayisi < t.katilimciSayisi){ return true; }
    else{ return false; }
}

bool topluluk::operator == (const topluluk& t) const
{
    if(katilimciSayisi == t.katilimciSayisi){ return true; }
    else{ return false; }
}

bool topluluk::operator >= (const topluluk& t) const
{
    if(katilimciSayisi >= t.katilimciSayisi){ return true; }
    else{ return false; }
}

bool topluluk::operator <= (const topluluk& t) const
{
    if(katilimciSayisi <= t.katilimciSayisi){ return true; }
    else{ return false; }
}

