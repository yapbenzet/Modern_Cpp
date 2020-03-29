#include <iostream>
#include <deque>

// https://www.geeksforgeeks.org/deque-cpp-stl/
// https://thispointer.com/deque_vs_vector/

// Vector'lere benzerler, ancak elemanların eklenmesi ve silinmesi durumunda daha verimlidir.
// Vector'lerden farklı olarak, bitişik depolama alanı tahsisi garanti edilemeyebilir.

// Vector yalnızca orta ve sonda ekleme ve silme sağlar.
// Oysa deque, ilk, orta ve sonda ekleme ve silme işlemleri sağlar.

// Vector için ekleme ve silme işlemlerinin performansı deque'den daha iyidir.

// Deque'deki rasgele erişim performansı (at() fonksiyonu veya [] operatörü) vektörden biraz daha yavaş olacaktır.

// Node-based

void showdq(std::deque<int> g)
{
    std::deque<int>::iterator it;
    for (it = g.begin(); it != g.end(); ++it)
        std::cout << '\t' << *it;
    std::cout << '\n';
}

int main()
{
    std::deque <int> gquiz;
    gquiz.push_back(10);
    gquiz.push_front(20);
    gquiz.push_back(30);
    gquiz.push_front(15);
    std::cout << "deque gquiz elemanları: ";
    showdq(gquiz);

    std::cout << std::endl;
    std::cout << "gquiz.size() : " << gquiz.size() << std::endl;
    std::cout << "gquiz.max_size() : " << gquiz.max_size() << std::endl;

    std::cout << "gquiz.at(2) : " << gquiz.at(2) << std::endl;
    std::cout << "gquiz.front() : " << gquiz.front() << std::endl;
    std::cout << "gquiz.back() : " << gquiz.back() << std::endl;

    std::cout << std::endl;
    std::cout << "gquiz.pop_front()"
                 " : ";
    gquiz.pop_front();
    showdq(gquiz);
    std::cout << "gquiz.pop_back() : ";
    gquiz.pop_back();
    showdq(gquiz);

    return 0;
}