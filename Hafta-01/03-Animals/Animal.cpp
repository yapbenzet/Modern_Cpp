//
// Created by atuash on 1.03.2020.
//

#include "Animal.h"

Animal::Animal() {}

void Animal::setName(string newName)
{
    name = newName;
}

string Animal::getName()
{
    return name;
}

void Animal::setHeight(double newHeight)
{
    height = newHeight;
}

double Animal::getHeight()
{
    return height;
}

void Animal::setWeight(int newWeight)
{
    if (newWeight > 0){
        weight = newWeight;
    }
    else{
        cout << "Weight must be bigger than 0" << endl;
    }
}
double Animal::getWeight()
{
    return weight;
}

void Animal::setFavFood(string newFavFood)
{
    favFood = newFavFood;
}

string Animal::getFavFood()
{
    return favFood;
}

void Animal::setSpeed(double newSpeed)
{
    speed = newSpeed;
}

double Animal::getSpeed()
{
    return speed;
}

void Animal::setSound(string newSound)
{
    sound = newSound;
}

string Animal::getSound()
{
    return sound;
}

// A private method can only be accessed by other public methods
// that are in the same class

void Animal::bePrivate(){
    cout << "I'm a private method" << endl;
}
