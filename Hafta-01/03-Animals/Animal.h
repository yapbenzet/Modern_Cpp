//
// Created by atuash on 1.03.2020.
//

#ifndef ANIMALS_ANIMAL_H
#define ANIMALS_ANIMAL_H

#include <iostream>
#include <string>

using namespace std;

class Animal {
public:
    Animal();

private:
    string name;
    double height;
    int weight;
    string favFood;
    double speed;
    string sound;

public:
    void setName(string newName);
    string getName();

    void setHeight(double newHeight);
    double getHeight();

    void setWeight(int newWeight);
    double getWeight();

    void setFavFood(string newFavFood);
    string getFavFood();

    void setSpeed(double newSpeed);
    double getSpeed();

    void setSound(string newSound);
    string getSound();

private:
    void bePrivate();

};


#endif //ANIMALS_ANIMAL_H
