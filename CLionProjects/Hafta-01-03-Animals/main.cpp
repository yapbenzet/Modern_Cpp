#include <iostream>
#include "Animal.h"
#include "Dog.h"
#include "Cat.h"

static void changeObjectName(Dog fido){

    fido.setName("Marcus");

}

// Receives Animal objects and makes them speak

static void speakAnimal(Animal randAnimal){

    cout << "Animal says: " << randAnimal.getSound() << endl;

}

// This is a non-static method used to demonstrate that you can't
// call a non-static method inside a static method

void sayHello(){

    cout << "Hello" << endl;

}

int main() {

    int justANum = 10;

    Dog *fido = new Dog();

    fido->setName("Fido");
    cout << fido->getName() << endl;

    fido->digHole();

    fido->setWeight(-1);

    // Everything is pass by value
    // The original is not effected by changes in methods

    int randNum = 10;
    fido->changeVar(randNum);

    cout << "randNum after method call: " << randNum << endl;

    // Objects are passed by reference to the original object
    // Changes in methods do effect the object

    changeObjectName(*fido);

    cout << "Dog name after method call: " + fido->getName() << endl;

    cout << "Animal Sound: " + fido->getSound() << endl;

    // Create a Dog and Cat object with the super class
    // but the Dog and Cat reference type

    Animal *doggy = new Dog();
    Animal *kitty = new Cat();

    cout << "Doggy says: " << doggy->getSound() << endl;
    cout << "Kitty says: " << kitty->getSound() << endl;

    // Now you can make arrays of Animals and everything just works

    Animal *animals = new Animal[4];
    animals[0] = *doggy;
    animals[1] = *kitty;

    cout << "Doggy says: " +animals[0].getSound() << endl;
    cout << "Kitty says: " +animals[1].getSound() << endl;

    // Sends Animal objects for processing in a method

    speakAnimal(*doggy);

    // Polymorphism allows you to write methods that don't need to
    // change if new subclasses are created.

    // You can't reference methods, or fields that aren't in Animal
    // if you do, you'll have to cast to the required object

    ((Dog*) doggy)->digHole();

    // You can't use non-static variables or methods in a static function

    // System.out.println(justANum);

    // sayHello();

    // You can't call a private method even if you define it in
    // the subclass

    // fido.bePrivate();

    // You can execute a private method by using another public
    // method in the class

    fido->accessPrivate();

    return 0;
}
