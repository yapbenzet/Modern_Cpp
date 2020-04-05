#include "topluluk.h"
#include <set>

int main()
{
    const topluluk t1("a",12);
    const topluluk t2("b",5);
    const topluluk t3("c",92);
    const topluluk t4("d",44);

    std::cout << "t1: " << t1.getIsim() << " : " <<  t1.getKatilimciSayisi() << std::endl;
    std::cout << "t2: " << t2.getIsim() << " : " <<  t2.getKatilimciSayisi() << std::endl;
    std::cout << "t3: " << t3.getIsim() << " : " <<  t3.getKatilimciSayisi() << std::endl;
    std::cout << "t4: " << t4.getIsim() << " : " <<  t4.getKatilimciSayisi() << std::endl;
    std::cout << std::endl;

    std::cout << "t1 + t2: " << (t1+t2).getKatilimciSayisi() << std::endl;
    std::cout << std::endl;

    if(t1 > t2)
    {
        std::cout << "t1 > t2" << std::endl;
    }
    std::cout << std::endl;

    std::set<topluluk> topluluklar;
    topluluklar.insert(t1);
    topluluklar.insert(t2);
    topluluklar.insert(t3);
    topluluklar.insert(t4);
    for (auto it=topluluklar.begin(); it!=topluluklar.end(); ++it)
        std::cout << it->isim << " : " << it->katilimciSayisi << std::endl;

    return 0;
}