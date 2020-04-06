#include "topluluk.h"
#include <set>
#include <map>

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

    std::cout << "set<topluluk>" << std::endl;
    std::set<topluluk> topluluklar;
    topluluklar.insert(t1);
    topluluklar.insert(t2);
    topluluklar.insert(t3);
    topluluklar.insert(t4);
    for (auto it=topluluklar.begin(); it!=topluluklar.end(); ++it)
        std::cout << it->getIsim() << " : " << it->getKatilimciSayisi() << std::endl;
    std::cout << std::endl;

    //////////////////////////////////////////////////////////////////////////////////////////////////////////////

    topluluk t5("a",12);
    topluluk t6("b",5);
    topluluk t7("c",92);
    topluluk t8("d",44);

    std::cout << "map<topluluk,int>" << std::endl;
    std::map<topluluk,int> topluluklar_map;
    topluluklar_map.insert(std::make_pair(t5, 2));
    topluluklar_map.insert(std::make_pair(t6, 1));
    topluluklar_map.insert(std::make_pair(t7, 4));
    topluluklar_map.insert(std::make_pair(t8, 3));

    for (auto it=topluluklar_map.begin(); it!=topluluklar_map.end(); ++it)
        std::cout << it->first.getIsim() << " : " << it->first.getKatilimciSayisi() << std::endl;
    std::cout << std::endl;

    //////////////////////////////////////////////////////////////////////////////////////////////////////////////

    topluluk *t9 = new topluluk("a",12);
    topluluk *t10 = new topluluk("b",5);
    topluluk *t11 = new topluluk("c",92);
    topluluk *t12 = new topluluk("d",44);

    std::cout << "map<topluluk*,int>" << std::endl;
    std::map<topluluk*,int> topluluklar_map_2;
    topluluklar_map_2.insert(std::make_pair(t9, 2));
    topluluklar_map_2.insert(std::make_pair(t10, 1));
    topluluklar_map_2.insert(std::make_pair(t11, 4));
    topluluklar_map_2.insert(std::make_pair(t12, 3));

    for (auto it=topluluklar_map_2.begin(); it!=topluluklar_map_2.end(); ++it)
        std::cout << it->first->getIsim() << " : " << it->first->getKatilimciSayisi() << std::endl;
    std::cout << std::endl;

    return 0;
}