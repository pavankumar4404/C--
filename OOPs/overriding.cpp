#include <iostream>
using namespace std;

// Base class
class Animal {
public:
    virtual void makeSound() {
        std::cout << "The animal makes a sound." << std::endl;
    }
};

// Derived class
class Dog : public Animal {
public:
    void makeSound() {
        std::cout << "The dog barks." << std::endl;
    }
};

// Another derived class
class Cat : public Animal {
public:
    void makeSound() {
        std::cout << "The cat meows." << std::endl;
    }
};

int main() {
    Animal* animal = new Animal;
    Dog* dog = new Dog;
    Cat* cat = new Cat;

    // Function calls
    animal->makeSound();  // The animal makes a sound.
    dog->makeSound();     // The dog barks.
    cat->makeSound();     // The cat meows.

    // delete animal;
    // delete dog;
    // delete cat;

    return 0;
}
