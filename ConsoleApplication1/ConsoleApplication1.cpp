#include <iostream>
using namespace std;

class Animal {
public:
    virtual ~Animal() {}

public:
    virtual void makeSound() = 0;
};

class Dog : public Animal{
public:
    void makeSound() {
        cout << "Dog sound";
    }
};

class Cat : public Animal {
public:
    void makeSound() {
        cout << "Cat sound";
    }
};

class Cow : public Animal {
public:
    void makeSound() {
        cout << "Cow sound";
    }
};

int main()
{    
    Animal* animal[3];
    animal[0] = new Dog();
    animal[1] = new Cat();
    animal[2] = new Cow();

    for (int i = 0; i < 3; i++) {
        (*animal[i]).makeSound();
    }
}


