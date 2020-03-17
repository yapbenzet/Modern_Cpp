//
// Created by atuash on 17.03.2020.
//

#include "gunluk.h"

gunluk::gunluk(const std::string &title) : title(title) {}

void gunluk::add(const std::string &entry)
{
    entries.push_back(entry);
}

void gunluk::save(const std::string &filename)
{
    std::ofstream ofs(filename);
    for (auto& s : entries)
        ofs << s << std::endl;
}