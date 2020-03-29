#include <iostream>
#include <list>
#include <iterator>

// https://www.geeksforgeeks.org/list-cpp-stl/

// Listeler bitişik olmayan bellek tahsisine izin veren dizi konteynerlardır.
// Vector'le karşılaştırıldığında, listenin yavaş geçişi vardır, ancak bir konum bulunduğunda ekleme ve silme hızlıdır.

// Node-based

// forward_list dezavantajı, geriye doğru yinelenememesi ve bağımsız öğelerine doğrudan erişilememesidir.

void showlist(std::list <int> g)
{
    std::list <int> :: iterator it;
    for(it = g.begin(); it != g.end(); ++it)
        std::cout << '\t' << *it;
    std::cout << '\n';
}

int main()
{
    std::list <int> gqlist1, gqlist2;

    for (int i = 0; i < 10; ++i)
    {
        gqlist1.push_back(i * 2);
        gqlist2.push_front(i * 3);
    }
    std::cout << std:: endl << "List 1 (gqlist1): ";
    showlist(gqlist1);

    std::cout << std:: endl  << "List 2 (gqlist2): ";
    showlist(gqlist2);

    std::cout << std:: endl  << "gqlist1.front() : " << gqlist1.front();
    std::cout << std:: endl  << "gqlist1.back() : " << gqlist1.back();

    std::cout << std:: endl  << "gqlist1.pop_front() : ";
    gqlist1.pop_front();
    showlist(gqlist1);

    std::cout << std:: endl  << "gqlist2.pop_back() : ";
    gqlist2.pop_back();
    showlist(gqlist2);

    std::cout << std:: endl << "gqlist1.reverse() : ";
    gqlist1.reverse();
    showlist(gqlist1);

    std::cout << std:: endl  << "gqlist2.sort(): ";
    gqlist2.sort();
    showlist(gqlist2);

    return 0;
}