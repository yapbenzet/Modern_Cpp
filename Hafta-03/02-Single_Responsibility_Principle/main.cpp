#include <iostream>
#include <fstream>
#include <string>
#include <vector>

//#include "gunluk.h"
#include "kaydedici.h"

using namespace std;

int main()
{
    gunluk *gnlk = new gunluk("Gunlugum");
    gnlk->add("Bugun cok guzeldi.");
    gnlk->add("Bugun cok kotuydu.");

    //gnlk.save("diary.txt");

    kaydedici kaydet;
    kaydet.save(*gnlk, "Gunluk.txt"); // CMakeFiles'ta kayıtlı

    return 0;
}