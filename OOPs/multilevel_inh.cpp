#include <iostream>

class GrandParent {
public:
    void displayGrandParent() {
        std::cout << "GrandParent class" << std::endl;
    }
};

class Parent : public GrandParent {
public:
    void displayParent() {
        std::cout << "Parent class" << std::endl;
    }
};

class Child : public Parent {
public:
    void displayChild() {
        std::cout << "Child class" << std::endl;
    }
};

int main() {
    Child childObj;

    childObj.displayChild();         // Accessing Child class function
    childObj.displayParent();        // Accessing Parent class function
    childObj.displayGrandParent();   // Accessing GrandParent class function

    return 0;
}
