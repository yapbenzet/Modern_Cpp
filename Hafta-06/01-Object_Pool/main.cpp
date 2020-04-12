#include <iostream>
#include <string>
#include <list>
#include <future>
#include <mutex>
#ifdef _WIN32
#include <Windows.h>
#else
#include <unistd.h>
#endif

static std::mutex _mtx;

class Esya
{
    std::string isim;

public:
    Esya() : isim("")
    {

    }

    Esya(const std::string &isim) : isim(isim)
    {

    }

    std::string getIsim()
    {
        return isim;
    }

    void setIsim(std::string name)
    {
        isim = name;
    }

    void reset()
    {
        isim = "";
    }
};

class Dukkan
{
private:
    std::list<Esya*> esyalar;

    static Dukkan* instance;
    static int eleman_sayisi;
    static int mevcut_eleman_sayisi;
    int max_size = 3;
    Dukkan() {}

public:

    static Dukkan* getInstance()
    {
        _mtx.lock();
        if (instance == 0)
        {
            instance = new Dukkan;
            eleman_sayisi = 0;
        }
        _mtx.unlock();
        return instance;
    }

    Esya* esyaSat(std::string isim)
    {
        _mtx.lock();
        if (esyalar.empty())
        {

            if(eleman_sayisi < 3) {
                std::cout << "Yeni esya yaratildi." << std::endl;
                eleman_sayisi++;
                std::cout << "Kalan esya sayisi: " << mevcut_eleman_sayisi << std::endl;
                _mtx.unlock();
                return new Esya(isim);
            }
            else{
                std::cout << "Dukkanda esya bulunmamaktadir." << std::endl;
                _mtx.unlock();
                return nullptr;
            }
        }
        else
        {
            std::cout << "Dukkandan esya alindi." << std::endl;
            Esya* esya = esyalar.front();
            esya->setIsim(isim);
            esyalar.pop_front();
            mevcut_eleman_sayisi--;
            std::cout << "Kalan esya sayisi: " << mevcut_eleman_sayisi << std::endl;
            _mtx.unlock();
            return esya;
        }
    }

    void esyaSatinAl(Esya* esya)
    {
        _mtx.lock();
        if(esya == nullptr)
        {
            std::cout << "Dukkana nullptr eklenmedi." << std::endl;
        }
        else{
            if(mevcut_eleman_sayisi < max_size)
            {
                std::cout << "Esya dukkana eklendi" << std::endl;
                esya->reset();
                esyalar.push_back(esya);
                mevcut_eleman_sayisi++;
                std::cout << "Kalan esya sayisi: " << mevcut_eleman_sayisi << std::endl;
            }
            else
            {
                std::cout << "Dukkan dolu." << std::endl;
            }
        }
        _mtx.unlock();
    }
};

Dukkan* Dukkan::instance = 0;
int Dukkan::eleman_sayisi = 0;
int Dukkan::mevcut_eleman_sayisi = 0;

void esyaYazdir(std::string name){
    Dukkan* dukkan = Dukkan::getInstance();
    Esya* esy;
    esy = dukkan->esyaSat(name);
    usleep(500000);
    while(esy == nullptr)
    {
        esy = dukkan->esyaSat(name);
    }
    _mtx.lock();
    std::cout << "Esya ismi: " << esy->getIsim() << std::endl;
    _mtx.unlock();
    dukkan->esyaSatinAl(esy);
}

int main()
{
    Dukkan* dukkan = Dukkan::getInstance();
    Esya* bir;
    Esya* iki;
    Esya* uc;

    bir = dukkan->esyaSat("");
    iki = dukkan->esyaSat("");
    uc = dukkan->esyaSat("");

    dukkan->esyaSatinAl(bir);
    dukkan->esyaSatinAl(iki);
    dukkan->esyaSatinAl(uc);
    std::cout << std::endl;

    auto thread1 = std::async(std::launch::async,esyaYazdir,"1. thread");
    auto thread2 = std::async(std::launch::async,esyaYazdir,"2. thread");
    auto thread3 = std::async(std::launch::async,esyaYazdir,"3. thread");
    auto thread4 = std::async(std::launch::async,esyaYazdir,"4. thread");
    auto thread5 = std::async(std::launch::async,esyaYazdir,"5. thread");
    auto thread6 = std::async(std::launch::async,esyaYazdir,"6. thread");

    /* Resources will be reused.
     * Notice that the value of both resources were reset back to zero.
     */

    return 0;
}