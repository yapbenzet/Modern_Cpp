#include <algorithm>
#include <array>
#include <iostream>
#include <iterator>
#include <string>

// https://www.geeksforgeeks.org/stdarray-in-cpp/

// Array, sabit boyutlu diziler için kullanılır.
// Array ile sabit boyutlu dizilerin uzunluk bilgisi size() fonksiyonu kullanılarak elde edilebilir.

// Continous

int main() {


    std::array<int, 5> ar1{3, 4, 5, 1, 2};
    std::array<int, 5> ar2 = {1, 2, 3, 4, 5};
    std::array<std::string, 2> ar3 = {std::string("a"), "b"};

    std::cout << "Dizi boyutlari" << std::endl;
    std::cout << "ar1 = " << ar1.size() << std::endl;
    std::cout << "ar2 = " << ar2.size() << std::endl;
    std::cout << "ar3 = " << ar3.size() << std::endl << std::endl;

    std::cout << "Basta girilen ar1 : ";
    for (auto i : ar1)
        std::cout << i << ' ';
    std::cout << std::endl;

    std::sort(ar1.begin(), ar1.end());

    std::cout << "Siralanmis ar1 : ";
    for (auto i : ar1)
        std::cout << i << ' ';
    std::cout << std::endl;

    ar2.fill(10);

    std::cout << "Doldurulmus ar2 : ";
    for (auto i : ar2)
        std::cout << i << ' ';
    std::cout << std::endl;

    std::cout << "ar3 : ";
    for (auto &s : ar3)
        std::cout << s << ' ';

    return 0;
}
