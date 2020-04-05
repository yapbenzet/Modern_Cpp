#include <iostream>
#include <future>
#include <mutex>
#ifdef _WIN32
#include <Windows.h>
#else
#include <unistd.h>
#endif

static std::mutex _mtx;

class Dusman {                                                      // <1>

public:
    static Dusman* olustur() {
        _mtx.lock();                                                // <2>
        if(m_instanceDusman == nullptr){                            // <3>
            m_instanceDusman = new Dusman();
        }
        _mtx.unlock();                                              // <4>
        return m_instanceDusman;
    }
    void hasar_al(int val){                                         // <5>
        can -= val;
    }

    int get_can(){                                                  // <6>
        return can;
    }

    void set_can(int val){                                           // <7>
        can = val;
    }

private:
    //destructor
    Dusman() {                                                      // <8>
        std::cout << "Dusman olusturuldu!\n";
    }
    ~Dusman() {}                                                    // <9>

    int can = 100;
    static Dusman *m_instanceDusman;                                // <10>
};

Dusman* Dusman::m_instanceDusman = nullptr;                         // <11>

class Savasci{                                                      // <12>
public:
    Savasci(int id, int hasar) : id(id), hasar(hasar) {}

    int id;
    int hasar;
    int can = 100;
};

void hasarVer(Savasci *savasci){
    Dusman *obj1 = Dusman::olustur();                               // <13>
    sleep(1);
    _mtx.lock();                                                    // <14>
    obj1->hasar_al(savasci->hasar);
    std::cout << "Savasci_" << savasci->id <<" verilen hasar: "<< savasci->hasar << std::endl;
    std::cout << "Dusman kalan can: " << obj1->get_can() << std::endl;
    _mtx.unlock();
}

int main()
{
    std::cout<<"Singleton Example\n"<<std::endl;

    Savasci *sv1 = new Savasci(1,30);
    Savasci *sv2 = new Savasci(2,40);

    auto fut1= std::async(std::launch::async,hasarVer,sv1);         // <15>
    auto fut2= std::async(std::launch::async,hasarVer,sv2);

    return 0;
}