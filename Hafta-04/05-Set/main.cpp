#include<iostream>
#include<set>
#include<string>

// https://thispointer.com/stdset-tutorial-part-1-set-usage-details-with-default-sorting-criteria/
// https://www.geeksforgeeks.org/set-vs-map-c-stl/

// Map anahtar değer çiftlerini saklamak için kullanılırken, set yalnızca anahtarları saklamak için kullanılır.

int main()
{
    std::set<std::string> setOfNumbers;

    // Lets insert four elements
    setOfNumbers.insert("first");
    setOfNumbers.insert("second");
    setOfNumbers.insert("third");
    setOfNumbers.insert("first");

    // Only 3 elements will be inserted
    std::cout<<"Set Size = " << setOfNumbers.size() << std::endl;

    // Iterate through all the elements in a set and display the value.
    for (std::set<std::string>::iterator it=setOfNumbers.begin(); it!=setOfNumbers.end(); ++it)
        std::cout << ' ' << *it;
    std::cout<<"\n";

    std::set<std::string>::iterator it = setOfNumbers.find("second");
    if(it != setOfNumbers.end())
        std::cout<<"'first'  found"<<std::endl;
    else
        std::cout<<"'first' not found"<<std::endl;

    // Search for element in set using find member function
    it = setOfNumbers.find("fourth");
    if(it != setOfNumbers.end())
        std::cout<<"'fourth'  found"<<std::endl;
    else
        std::cout<<"'fourth' not found"<<std::endl;
    return 0;
}