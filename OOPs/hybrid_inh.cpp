#include <iostream>

class Animal {
public:
    void eat() {
        std::cout << "Animal is eating." << std::endl;
    }
};

class Mammal : public Animal {
public:
    void sleep() {
        std::cout << "Mammal is sleeping." << std::endl;
    }
};

class Bird : public Animal {
public:
    void fly() {
        std::cout << "Bird is flying." << std::endl;
    }
};

class Bat : public Mammal, public Bird {
public:
    void display() {
        std::cout << "Bat is a hybrid animal." << std::endl;
    }
};

int main() {
    Bat bat;
    bat.display(); // Defined in Bat class
    // bat.Animal::eat();     // Inherited from Animal class
    bat.sleep();   // Inherited from Mammal class
    bat.fly();     // Inherited from Bird class

    return 0;
}