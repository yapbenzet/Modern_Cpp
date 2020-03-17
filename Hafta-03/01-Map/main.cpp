#include <iostream>
#include <map>
#include <string>
#include <iterator>

//https://thispointer.com/stdmap-tutorial-part-1-usage-detail-with-examples/

// std::map ikili değerleri tutmak için kullanılır

//std::map kullanmanın faydaları:

//Eşi olmayan (unique) anahtarları tutar ve bu tutma işlemini sıralı olarak yapar. Bir iterator kullanılacağı zaman anahtarların sırasına göre tarama yapılır.
//Bu nedenle aramalar çok daha hızlı gerçekleşir.
//std::map ile her bir elemanın sadece bir elemanı olabilir.


int main()
{
    std::map<std::string, int> mapOfWords;
    // Inserting data in std::map
    mapOfWords.insert(std::make_pair("earth", 1));
    mapOfWords.insert(std::make_pair("moon", 2));
    mapOfWords["sun"] = 3;
    // Will replace the value of already added key i.e. earth
    mapOfWords["earth"] = 4;
    // mapOfWords[3] = "mars";   // Çalışmaz

    // Iterate through all elements in std::map
    std::map<std::string, int>::iterator it = mapOfWords.begin();
    while(it != mapOfWords.end())
    {
        std::cout<<it->first<<" :: "<<it->second<<std::endl;
        it++;
    }
    std::cout << std::endl;

    // Check if insertion is successful or not
    if(mapOfWords.insert(std::make_pair("earth", 1)).second == false)
    {
        std::cout<<"Element with key 'earth' not inserted because already existed"<<std::endl;
    }
    std::cout << std::endl;

    // Searching element in std::map by key.
    if(mapOfWords.find("sun") != mapOfWords.end())
        std::cout<<"word 'sun' found"<<std::endl;
    if(mapOfWords.find("mars") == mapOfWords.end())
        std::cout<<"word 'mars' not found"<<std::endl;
    std::cout << std::endl;

    // Erasing By iterator
    it = mapOfWords.find("moon");
    mapOfWords.erase(it);

    it = mapOfWords.begin();
    while(it != mapOfWords.end())
    {
        std::cout<<it->first<<" :: "<<it->second<<std::endl;
        it++;
    }
    std::cout << std::endl;

    // Erasing By Key
    mapOfWords.erase("earth");

    it = mapOfWords.begin();
    while(it != mapOfWords.end())
    {
        std::cout<<it->first<<" :: "<<it->second<<std::endl;
        it++;
    }
    return 0;
}

