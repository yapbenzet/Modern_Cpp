#include <iostream>
#include <string>

// lvalue: Bellekte bir yer tutan ve adresi temin edilen değer/ifade (“expression”). '=' in sol tarafında kalabilen ifadelere denir.
// rvalue: Herhangi bir tanımlaması olmayan ve sadece hesaplama sırasında var olan ve kullanılan değer/ifade

class Printer{
public:
    void Print(const std::string& str){
        std::cout << "lvalue: " << str << std::endl;
    }

    void Print(const std::string&& str){
        std::cout << "rvalue: " << str << std::endl;
        some_str = std::move(str);
    }

private:
    std::string some_str;
};

int main ()
{
    int val = 3; // Burada 'val' değişkeni bir lvalue'dur. '3' ise rvalue'dur.
    int&& val2 = std::move(val);    // Burada bu fonksiyonun kullanılmasının amacı hız kazanmaktır. '=' operatörü ile
    // değişkene değer atılırken kopyalama işlemi gerçekleşir. Kopyalama yapılmadan değişkenin direk taşınması daha
    // hızlı gerçekleşen bir işlemdir. Sadece taşıma işleminin gerçekleşmesi için std::move() fonksiyonu kullanılır. Bu
    // fonksiyonun çıktısı da 'Type&&'dir.
    std::cout << val2 << std::endl;

    std::string hello = "hi";
    std::string hello_2 = "hi_2";
    std::string&& hello_3 = std::move(hello_2);
    Printer printer;
    printer.Print(hello);
    printer.Print(hello_3);
    printer.Print("hello");
    printer.Print(std::move(hello));
    std::cout << "after move: " << hello << std::endl;  // çalışıyor fakat kullanılmamalı

    return 0;
}
