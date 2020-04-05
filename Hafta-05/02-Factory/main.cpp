#include <iostream>
#include <string>
#include <map>

class Karakter{
public:
    Karakter(int can, int guc, const std::string &isim) : can(can), guc(guc), isim(isim) {}
    int can;
    int guc;
    std::string isim;
    virtual void saldir() const = 0;
};

class Savasci : public Karakter{
public:
    Savasci(int can, int guc, const std::string &isim) : Karakter(can, guc, isim) {}

private:
    virtual void saldir() const{
        std::cout <<  this->isim << ": Verilen hasar: " << this->guc*3;
    }
};

class Dusman : public Karakter{
public:
    Dusman(int can, int guc, const std::string &isim) : Karakter(can, guc, isim) {}

private:
    virtual void saldir() const{
        std::cout << this->isim << ": Verilen hasar: " << this->guc*2;
    }
};

class Hayvan : public Karakter{
public:
    Hayvan(int can, int guc, const std::string &isim) : Karakter(can, guc, isim) {}

private:
    virtual void saldir() const{
        std::cout << this->isim << ": Verilen hasar: " << this->guc;
    }
};

class KarakterUretici{
public:
    Karakter* karakterUret(std::string tip)
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
    KarakterUretici *uretici = new KarakterUretici();
    std::map<Karakter*, int> karakterler;
    int i = 0;

    karakterler.insert(std::make_pair(uretici->karakterUret("savasci"), i)); i++;
    karakterler.insert(std::make_pair(uretici->karakterUret("dusman"), i)); i++;
    karakterler.insert(std::make_pair(uretici->karakterUret("hayvan"), i)); i++;
    karakterler.insert(std::make_pair(uretici->karakterUret("savasci"), i)); i++;
    karakterler.insert(std::make_pair(uretici->karakterUret("dusman"), i)); i++;
    karakterler.insert(std::make_pair(uretici->karakterUret("hayvan"), i)); i++;

    return 0;
}
