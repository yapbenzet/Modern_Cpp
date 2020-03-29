#include <iostream>
#include <set>
#include <iterator>

// https://www.geeksforgeeks.org/multiset-in-cpp-stl/

int main()
{
    // empty multiset container 
    std::multiset <int, std::greater <int> > gquiz1;

    // insert elements in random order 
    gquiz1.insert(40);
    gquiz1.insert(30);
    gquiz1.insert(60);
    gquiz1.insert(20);
    gquiz1.insert(50);
    gquiz1.insert(50); // 50 will be added again to the multiset unlike set 
    gquiz1.insert(10);

    // printing multiset gquiz1 
    std::multiset <int, std::greater <int> > :: iterator itr;
    std::cout << "\nThe multiset gquiz1 is : ";
    for (itr = gquiz1.begin(); itr != gquiz1.end(); ++itr)
    {
        std::cout << '\t' << *itr;
    }
    std::cout << std::endl;

    // assigning the elements from gquiz1 to gquiz2 
    std::multiset <int> gquiz2(gquiz1.begin(), gquiz1.end());

    // print all elements of the multiset gquiz2 
    std::cout << "\nThe multiset gquiz2 after assign from gquiz1 is : ";
    for (itr = gquiz2.begin(); itr != gquiz2.end(); ++itr)
    {
        std::cout << '\t' << *itr;
    }
    std::cout << std::endl;

    // remove all elements up to element with value 30 in gquiz2 
    std::cout << "\ngquiz2 after removal of elements less than 30 : ";
    gquiz2.erase(gquiz2.begin(), gquiz2.find(30));
    for (itr = gquiz2.begin(); itr != gquiz2.end(); ++itr)
    {
        std::cout << '\t' << *itr;
    }

    // remove all elements with value 50 in gquiz2 
    int num;
    num = gquiz2.erase(50);
    std::cout << "\ngquiz2.erase(50) : ";
    std::cout << num << " removed \t" ;
    for (itr = gquiz2.begin(); itr != gquiz2.end(); ++itr)
    {
        std::cout << '\t' << *itr;
    }

    std::cout << std::endl;

    //lower bound and upper bound for multiset gquiz1 
    std::cout << "gquiz1.lower_bound(40) : "
         << *gquiz1.lower_bound(40) << std::endl;
    std::cout << "gquiz1.upper_bound(40) : "
         << *gquiz1.upper_bound(40) << std::endl;

    //lower bound and upper bound for multiset gquiz2 
    std::cout << "gquiz2.lower_bound(40) : "
         << *gquiz2.lower_bound(40) << std::endl;
    std::cout << "gquiz2.upper_bound(40) : "
         << *gquiz2.upper_bound(40) << std::endl;

    return 0;

} 