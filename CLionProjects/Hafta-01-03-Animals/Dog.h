//
// Created by atuash on 1.03.2020.
//

#ifndef ANIMALS_DOG_H
#define ANIMALS_DOG_H

#include "Animal.h"

class Dog : public Animal {
public:
    Dog();

    void digHole();
    void changeVar(int randNum);
    void accessPrivate();

private:
    void bePrivate();

};


#endif //ANIMALS_DOG_H
