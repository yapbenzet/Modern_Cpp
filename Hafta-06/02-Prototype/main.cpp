#include <iostream>

class Esya1{
public:
    int *id;
    int hacim;

    Esya1(){
        id = new int(0);
        hacim = 10;
    }

    virtual void yazdir() const
    {
        std::cout << "Esya1 esya: " << "ID: " << *this->id << " Hacim: " << this->hacim << std::endl;
    }
};

class Esya2{
public:
    int *id;
    int hacim;

    Esya2(){
        this->id = new int(0);
        this->hacim = 10;
    }

    // Copy Constructer
    Esya2(const Esya2& es)
    {
        this->id = new int(*es.id);
        this->hacim = es.hacim;
    }

    virtual void yazdir() const
    {
        std::cout << "Esya2 esya: " << "ID: " << *this->id << " Hacim: " << this->hacim << std::endl;
    }
};

// Shallow copy icin
class Cevresel_Esya : public Esya1{
public:

    Cevresel_Esya(const Esya1& esya1)
    {
        this->id = esya1.id;
        this->hacim = esya1.hacim;
    }

    void yazdir() const
    {
        std::cout << "Cevresel esya: " << "ID: " << *this->id << " Hacim: " << this->hacim << std::endl;
    }
};

// Deep copy icin
class Kisisel_Esya : public Esya2{
public:

    // Copy Constructer
    Kisisel_Esya(const Esya2& es)
    {
        this->id = new int(*es.id);
        this->hacim = es.hacim;
    }

    void yazdir() const
    {
        std::cout << "Kisisel esya: " << "ID: " << *this->id << " Hacim: " << this->hacim << std::endl;
    }
};

int main()
{
//    Esya1 esya11;
//    Esya1 esya12 = esya11;
//
//    std::cout << "esya11: id:" << *esya11.id << " Hacim: " << esya11.hacim << std::endl;
//    std::cout << "esya12: id:" << *esya12.id << " Hacim: " << esya12.hacim << std::endl;
//
//    std::cout << std::endl;
//    *esya11.id = 5;
//    esya11.hacim = 12;
//
//    std::cout << "esya11: id:" << *esya11.id << " Hacim: " << esya11.hacim << std::endl;
//    std::cout << "esya12: id:" << *esya12.id << " Hacim: " << esya12.hacim << std::endl;
//
//    std::cout << std::endl;
//    std::cout << "---------------------------------------" << std::endl;
//    std::cout << std::endl;
//
//    Esya2 esya21;
//    Esya2 esya22 = esya21;
//
//    std::cout << "esya21: id:" << *esya21.id << " Hacim: " << esya21.hacim << std::endl;
//    std::cout << "esya22: id:" << *esya22.id << " Hacim: " << esya22.hacim << std::endl;
//
//    std::cout << std::endl;
//    *esya21.id = 5;
//    esya21.hacim = 12;
//
//    std::cout << "esya21: id:" << *esya21.id << " Hacim: " << esya21.hacim << std::endl;
//    std::cout << "esya22: id:" << *esya22.id << " Hacim: " << esya22.hacim << std::endl;

    Esya1 esya3;
    Cevresel_Esya cev = esya3;

    std::cout << "esya3: ";
    esya3.yazdir();
    std::cout << "cev: ";
    cev.yazdir();

    std::cout << std::endl;
    *esya3.id = 5;
    esya3.hacim = 12;

    std::cout << "esya3: ";
    esya3.yazdir();
    std::cout << "cev: ";
    cev.yazdir();

    std::cout << std::endl;
    std::cout << "---------------------------------------" << std::endl;
    std::cout << std::endl;

    Esya2 esya4;
    Kisisel_Esya kis = esya4;

    std::cout << "esya4: ";
    esya4.yazdir();
    std::cout << "kis: ";
    kis.yazdir();

    std::cout << std::endl;
    *esya4.id = 5;
    esya4.hacim = 12;

    std::cout << "esya4: ";
    esya4.yazdir();
    std::cout << "kis: ";
    kis.yazdir();

    return 0;
}