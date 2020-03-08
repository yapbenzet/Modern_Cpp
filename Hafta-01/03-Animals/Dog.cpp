//
// Created by atuash on 1.03.2020.
//

#include "Dog.h"

Dog::Dog()
{
    setSound("Bark");
}

void Dog::digHole(){

    cout << "Dug a hole" << endl;

}

void Dog::changeVar(int randNum){

    randNum = 12;

    cout << "randNum in method value: " << randNum << endl;

}

/* This private method can only be accessed through using other
 * methods in the class */

void Dog::bePrivate(){
    cout << "In a private method" << endl;
}

void Dog::accessPrivate(){
    bePrivate();
}