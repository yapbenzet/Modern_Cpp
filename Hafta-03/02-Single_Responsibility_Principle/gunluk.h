//
// Created by atuash on 17.03.2020.
//

#ifndef MODERN_CPP_GUNLUK_H
#define MODERN_CPP_GUNLUK_H

#include <iostream>
#include <fstream>
#include <string>
#include <vector>

class gunluk {
public:
    std::string title;
    std::vector<std::string> entries;

    gunluk(const std::string &title);

    void add(const std::string& entry);

    // persistence is a separate concern
    void save(const std::string& filename);
};


#endif //MODERN_CPP_GUNLUK_H
