#include <iostream>

using namespace std;

class Vehicle {
public:
    int *plaka;
    int hacim;

    Vehicle() {
        plaka = new int(5);
        hacim = 10;
    }

    // Burası ile = operatöründe kullanılan constructer değiştiriliyor.
    Vehicle(const Vehicle& x) {
        this->plaka = new int(*x.plaka);
        this->hacim = x.hacim;
    }

    void setPlaka(int p) {
        plaka = new int;
        *plaka = p;
    }
    int getPlaka() {
        return *plaka;
    }

    void setHacim(int h) {
        hacim = h;
    }
    int getHacim() {
        return hacim;
    }

};

class Araba: public Vehicle {
protected:
    int *kapiSayisi;
public:
    Araba() {

    }
    Araba(const Vehicle &v2) {
        this->plaka = new int(*v2.plaka);
        this->hacim = v2.hacim;
    }
    void setKapiSayisi(int k) {
        kapiSayisi = new int;
        *kapiSayisi = k;
    }
    int getKapiSayisi() {
        return *kapiSayisi;
    }

};

class Gemi : public Vehicle {
protected:
    int *kapasite;
public:
    Gemi(){}
    Gemi(int k) {
        kapasite = new int;
        *kapasite = k;
    }
    Gemi(const Vehicle &v2) {
        this->plaka = v2.plaka;
    }
    void setKapasite(int k) {
        kapasite = new int;
        *kapasite = k;
    }
    int getKapasite() {
        return *kapasite;
    }
};

int main()
{
    Vehicle prototype;
    Vehicle b = prototype;

    cout<<"prototype = " << prototype.plaka << " : " << prototype.getPlaka() << " : " << prototype.getHacim() << endl;
    cout<<"b = " << b.plaka << " : " << b.getPlaka() << " : " << b.getHacim() << endl;

    cout << endl;
    *prototype.plaka = 12;
    prototype.hacim = 24;

    cout<<"prototype = " << prototype.plaka << " : " << prototype.getPlaka() << " : " << prototype.getHacim() << endl;
    cout<<"b = " << b.plaka << " : " << b.getPlaka() << " : " << b.getHacim() << endl;

    cout << endl;
    cout << "-------------------------------------------------";
    cout << endl;

    Vehicle *prototype2 = new Vehicle();
    Vehicle *b2;
    *b2 = *prototype2;

    cout<<"prototype2 = " << prototype2->plaka << " : " << prototype2->getPlaka() << " : " << prototype2->getHacim() << endl;
    cout<<"b2 = " << b2->plaka << " : " << b2->getPlaka() << " : " << b2->getHacim() << endl;

    *prototype2->plaka = 12;
    prototype2->hacim = 24;

    cout<<"prototype2 = " << prototype2->plaka << " : " << prototype2->getPlaka() << " : " << prototype2->getHacim() << endl;
    cout<<"b2 = " << b2->plaka << " : " << b2->getPlaka() << " : " << b2->getHacim() << endl;

//    cout << endl;
//    cout << "-------------------------------------------------";
//    cout << endl;

//    Vehicle *prototype3 = new Vehicle();
//    Vehicle *b3;
//    b3 = prototype3;
//
//    cout<<"prototype3 = " << prototype3->plaka << " : " << prototype3->getPlaka() << " : " << prototype3->getHacim() << endl;
//    cout<<"b3 = " << b3->plaka << " : " << b3->getPlaka() << " : " << b3->getHacim() << endl;
//
//    *prototype3->plaka = 12;
//    prototype3->hacim = 24;
//
//    cout<<"prototype3 = " << prototype3->plaka << " : " << prototype3->getPlaka() << " : " << prototype3->getHacim() << endl;
//    cout<<"b3 = " << b3->plaka << " : " << b3->getPlaka() << " : " << b3->getHacim() << endl;

    cout << endl;
    cout << "-------------------------------------------------";
    cout << endl;

    Vehicle prototype4;
    Araba b4 = prototype4;

    cout<<"prototype4 = " << prototype4.plaka << " : " << prototype4.getPlaka() << " : " << prototype4.getHacim() << endl;
    cout<<"b4 = " << b4.plaka << " : " << b4.getPlaka() << " : " << b4.getHacim() << endl;

    cout << endl;
    *prototype4.plaka = 12;
    prototype4.hacim = 24;

    cout<<"prototype4 = " << prototype4.plaka << " : " << prototype4.getPlaka() << " : " << prototype4.getHacim() << endl;
    cout<<"b4 = " << b4.plaka << " : " << b4.getPlaka() << " : " << b4.getHacim() << endl;


    return 0;
}

