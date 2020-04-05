#include<iostream>
using namespace std;

// https://www.geeksforgeeks.org/early-binding-late-binding-c/

class Base
{
public:
    virtual void show() { cout<<" In Base \n"; }
};

class Derived: public Base
{
public:
    void show() { cout<<"In Derived \n"; }
};

int main(void)
{
    Base *bp = new Derived;
    bp->show();
    return 0;
}