//
// Created by atuash on 8.03.2020.
//

#ifndef MODERN_CPP_INSAN_H
#define MODERN_CPP_INSAN_H

#include <iostream>

class Insan
{
private:
public:
    virtual ~Insan();

private:
    std::string isim;
    int yas;

public:
    const std::string &getIsim() const;
    int getYas() const;

    void setIsim(const std::string &isim);
    void setYas(int yas);

    virtual void goster() const = 0; //Saf sanal fonksiyon bu şekilde tanımlanır.

};

/////////////////////////////////////////////////////////////////////////////

class Ogrenci : public Insan
{
private:
    std::string bolum;
public:
    virtual ~Ogrenci();

public:
    const std::string &getBolum() const;

    void setBolum(const std::string &bolum);

    virtual void goster() const;     // Ana sınıftan fonksiyon override eder
};


#endif //MODERN_CPP_INSAN_H
