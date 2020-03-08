//
// Created by atuash on 1.03.2020.
//

#ifndef ANIMALS_CAT_H
#define ANIMALS_CAT_H

#include "Animal.h"

class Cat : public Animal {
public:
    Cat();
    void attack();
    double FAVNUMBER = 3.14;
};


#endif //ANIMALS_CAT_H
