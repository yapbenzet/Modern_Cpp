#include "sinif.h"

int main()
{
    sinif sinif1{1,2,"3"};
    sinif sinif2{sinif1};
    sinif sinif3{1,2,"3"};
    sinif3 = sinif1;
    sinif sinif4 = sinif1;

    std::cout << "sinif1: ";sinif1.yazdir();
    std::cout << "sinif2: ";sinif2.yazdir();
    std::cout << "sinif3: ";sinif3.yazdir();
    std::cout << "sinif4: ";sinif4.yazdir();

    sinif1.a = 10;
    *sinif1.b = 10;
    sinif1.c = "10";
    std::cout << std::endl;

    std::cout << "sinif1: ";sinif1.yazdir();
    std::cout << "sinif2: ";sinif2.yazdir();
    std::cout << "sinif3: ";sinif3.yazdir();
    std::cout << "sinif4: ";sinif4.yazdir();

    std::cout << std::endl;
    std::cout << "----------------------------------------------" <<std::endl;
    std::cout << std::endl;

    sinif *sinif5 = new sinif(1,2,"3");
    sinif *sinif6 = sinif5;
//    sinif *sinif7;
//    *sinif7 = *sinif5; //Hata veriyor
    sinif *sinif8 = new sinif(*sinif5);
    sinif *sinif9 = new sinif(1,2,"3");
    *sinif9 = *sinif5;

    std::cout << "sinif5: ";sinif5->yazdir();
    std::cout << "sinif6: ";sinif6->yazdir();
//    std::cout << "sinif7: ";sinif7->yazdir();
    std::cout << "sinif8: ";sinif8->yazdir();
    std::cout << "sinif9: ";sinif9->yazdir();

    sinif5->a = 10;
    *sinif5->b = 10;
    sinif5->c = "10";
    std::cout << std::endl;

    std::cout << "sinif5: ";sinif5->yazdir();
    std::cout << "sinif6: ";sinif6->yazdir();
//    std::cout << "sinif7: ";sinif7->yazdir();
    std::cout << "sinif8: ";sinif8->yazdir();
    std::cout << "sinif9: ";sinif9->yazdir();

    return 0;
}
