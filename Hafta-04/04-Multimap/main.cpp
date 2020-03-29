#include <iostream>
#include <map>
#include <iterator>

// Multimap, map'e benzer, ayrıca birden fazla öğe aynı anahtara sahip olabilir.
// Her bir öğenin benzersiz olmasından ziyade, anahtar değer ve eşlenmiş değer çifti bu durumda benzersiz olmalıdır.

int main()
{
    std::multimap <int, int> gquiz1;        // empty multimap container

    // insert elements in random order 
    gquiz1.insert(std::pair <int, int> (1, 40));
    gquiz1.insert(std::pair <int, int> (2, 30));
    gquiz1.insert(std::pair <int, int> (3, 60));
    gquiz1.insert(std::pair <int, int> (4, 20));
    gquiz1.insert(std::pair <int, int> (5, 50));
    gquiz1.insert(std::pair <int, int> (6, 50));
    gquiz1.insert(std::pair <int, int> (6, 10));

    // printing multimap gquiz1 
    std::multimap <int, int> :: iterator itr;
    std::cout << "\nThe multimap gquiz1 is : \n";
    std::cout << "\tKEY\tELEMENT\n";
    for (itr = gquiz1.begin(); itr != gquiz1.end(); ++itr)
    {
        std::cout  <<  '\t' << itr->first
              <<  '\t' << itr->second << '\n';
    }
    std::cout << std::endl;

    // assigning the elements from gquiz1 to gquiz2 
    std::multimap <int, int> gquiz2(gquiz1.begin(),gquiz1.end());

    // print all elements of the multimap gquiz2 
    std::cout << "\nThe multimap gquiz2 after assign from gquiz1 is : \n";
    std::cout << "\tKEY\tELEMENT\n";
    for (itr = gquiz2.begin(); itr != gquiz2.end(); ++itr)
    {
        std::cout << '\t' << itr->first
             << '\t' << itr->second << '\n';
    }
    std::cout << std::endl;

    // remove all elements up to element with value 30 in gquiz2 
    std::cout << "\ngquiz2 after removal of elements less than key=3 : \n";
    std::cout << "\tKEY\tELEMENT\n";
    gquiz2.erase(gquiz2.begin(), gquiz2.find(3));
    for (itr = gquiz2.begin(); itr != gquiz2.end(); ++itr)
    {
        std::cout << '\t' << itr->first
             << '\t' << itr->second << '\n';
    }

    // remove all elements with key = 4 
    int num;
    num = gquiz2.erase(4);
    std::cout << "\ngquiz2.erase(4) : ";
    std::cout << num << " removed \n" ;
    std::cout << "\tKEY\tELEMENT\n";
    for (itr = gquiz2.begin(); itr != gquiz2.end(); ++itr)
    {
        std::cout << '\t' << itr->first
             << '\t' << itr->second << '\n';
    }

    std::cout << std::endl;

    //lower bound and upper bound for multimap gquiz1 key = 5 
    std::cout << "gquiz1.lower_bound(5) : " << "\tKEY = ";
    std::cout << gquiz1.lower_bound(5)->first << '\t';
    std::cout << "\tELEMENT = " << gquiz1.lower_bound(5)->second << std::endl;
    std::cout << "gquiz1.upper_bound(5) : " << "\tKEY = ";
    std::cout << gquiz1.upper_bound(5)->first << '\t';
    std::cout << "\tELEMENT = " << gquiz1.upper_bound(5)->second << std::endl;

    return 0;
} 