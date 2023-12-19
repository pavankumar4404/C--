#include <iostream>

class Animal {
public:
    void eat() {
        std::cout << "Animal is eating." << std::endl;
    }
};

class Cat : public Animal {
public:
    void meow() {
        std::cout << "Cat is meowing." << std::endl;
    }
};

class Dog : public Animal {
public:
    void bark() {
        std::cout << "Dog is barking." << std::endl;
    }
};

int main() {
    Cat cat;
    cat.eat();   // Inherited from Animal class
    cat.meow();  // Defined in Cat class

    Dog dog;
    dog.eat();   // Inherited from Animal class
    dog.bark();  // Defined in Dog class

    return 0;
}
