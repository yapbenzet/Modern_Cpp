#include <iostream>

#include "sinif.h"

// Vector veri depolamak için kullanılır. Array'den farklı olarak dizi oluşturulurken boyutunun tanımlanmasına gerek yoktur.

int main()
{
    sinif *snf = new sinif();                                            // Oluşturulan bu sınıf içersinde vector public olarak tanımlanmıştır. Diğer sınıflar tarafından kullanılabilir.

    snf->vec.push_back("modern");                                        // Vector'e veri eklenmek istendiği zaman push_back(veri) fonksiyonu kullanılır. push_back() fonksiyonuna Vector
    snf->vec.push_back("cpp");                                           // tipinde veriler girilmelidir.
    snf->vec.push_back("dersleri");

    std::cout << "vec eleman sayisi:" << snf->vec.size() << std::endl;               // Vector'un boyutu size() komutu ile alınır.
    std::cout << "vec vectorunun ilk elemanı:" << snf->vec.front() << std::endl;     // front() fonksiyonu, Vector'un ilk elemanını almaktadır.
    std::cout << "vec vectorunun son elemanı:" << snf->vec.back() << std::endl;      // back() fonksiyonu, Vector'un ilk elemanını almaktadır.
    std::cout << std::endl;

    for (size_t i = 0; i < snf->vec.size(); i++)
    {
        std::cout << i << ". eleman: " << snf->vec[i] << std::endl;           // Vector'un belirli bir elemanını okumak için at(int) fonksiyonu kullanılır.
    }

    for(auto str : snf->vec)
    {
        std::cout << str << std::endl;
    }

    std::cout << std::endl;

    snf->vec.assign(10,"c++");                                           // assign(int,"tip") fonksiyonu ile Vector'deki bütün elemanlar silinir ve
                                                                                // yerine fonksiyona girilen tipteki elemandan girilen int değeri kadar eklenir.

    snf->vec.insert(snf->vec.begin() + 1, "yeni eklendi");                    // Vector'un herhangi bir yerine yeni veri eklemek için insert(iterator,"tip") fonksiyonu kullanılır.
                                                                                         // Burada iterator vec.begin() + 1 olarak belirlenmiştir, 1. indexe veri eklenir.
                                                                                         // vec.begin(), sonucunda Vector'un başlangıç noktası için bir iterator söndürmektedir.

    for (size_t i = 0; i < snf->vec.size(); i++)
    {
        std::cout << i << ". eleman: " << snf->vec.at(i) << std::endl;
    }
    std::cout << std::endl;

    size_t vec_size = snf->vec.size();
    for (size_t i = 0; i < vec_size; i++)
    {
        snf->vec.pop_back();                                             // Vector'un son elemanını silmek için pop_back() fonksiyonu kullanılır. Bu dizi ile Vector'deki bütün veriler silinmektedir.
    }

    std::cout << "vec eleman sayisi:" << snf->vec.size() << std::endl;
    std::cout << std::endl;
    delete snf;

    return 0;
}
