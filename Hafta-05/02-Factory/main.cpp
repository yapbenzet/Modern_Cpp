#include <iostream>
#include <string>
#include <map>

class Karakter{                                                       // <1>
public:
    Karakter(int can, int guc, const std::string &isim) : can(can), guc(guc), isim(isim) {}
    int can;
    int guc;
    std::string isim;
    virtual void saldir() const = 0;                                  // <2>
};

class Savasci : public Karakter{                                      // <3>
public:
    Savasci(int can, int guc, const std::string &isim) : Karakter(can, guc, isim) {}

private:
    virtual void saldir() const{                                      // <4>
        std::cout <<  this->isim << ": Verilen hasar: " << this->guc*3 << std::endl;
    }
};

class Dusman : public Karakter{                                       // <5>
public:
    Dusman(int can, int guc, const std::string &isim) : Karakter(can, guc, isim) {}

private:
    virtual void saldir() const{                                      // <6>
        std::cout << this->isim << ": Verilen hasar: " << this->guc*2 << std::endl;
    }
};

class Hayvan : public Karakter{                                       // <7>
public:
    Hayvan(int can, int guc, const std::string &isim) : Karakter(can, guc, isim) {}

private:
    virtual void saldir() const{                                      // <8>
        std::cout << this->isim << ": Verilen hasar: " << this->guc << std::endl;
    }
};

class KarakterUretici{                                                // <9>
public:
    Karakter* karakterUret(std::string tip)                           // <10>
    {
        if(tip == "savasci")
        {
            return new Savasci(100,50,"savasci");
        }
        else if(tip == "dusman")
        {
            return new Dusman(100,50,"dusman");
        }
        else if(tip == "hayvan")
        {
            return new Hayvan(100,50,"hayvan");
        }
    }
};

int main()
{
    KarakterUretici *uretici = new KarakterUretici();                 // <11>
    std::map<Karakter*, int> karakterler;                             // <12>
    int i = 0;

    karakterler.insert(std::make_pair(uretici->karakterUret("savasci"), i++));
    karakterler.insert(std::make_pair(uretici->karakterUret("dusman"), i++));
    karakterler.insert(std::make_pair(uretici->karakterUret("hayvan"), i++));
    karakterler.insert(std::make_pair(uretici->karakterUret("dusman"), i++));
    karakterler.insert(std::make_pair(uretici->karakterUret("savasci"), i++));
    karakterler.insert(std::make_pair(uretici->karakterUret("hayvan"), i++));

    std::map<Karakter*, int>::iterator it = karakterler.begin();      // <13>
    while(it != karakterler.end())
    {
        std::cout << "key: " << it->second << " ";
        it->first->saldir();
        it++;
    }

    return 0;
}
