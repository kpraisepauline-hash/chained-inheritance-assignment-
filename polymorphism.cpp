
#include <iostream>
using namespace std;

// Parent class
class Animal {
public:
    virtual void sound() {
        cout << "Animals make sounds." << endl;
    }
};

// Derived class 1
class Dog : public Animal {
public:
    void sound() override {
        cout << "Dog barks." << endl;
    }
};

// Derived class 2
class Cat : public Animal {
public:
    void sound() override {
        cout << "Cat meows." << endl;
    }
};

int main() {
    Dog d;
    Cat c;

    Animal *ptr;

    ptr = &d;
    ptr->sound();

    ptr = &c;
    ptr->sound();

    return 0;
}
