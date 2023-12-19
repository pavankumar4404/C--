#include <iostream>

class BaseClass1 {
public:
    void display1() {
        std::cout << "Base Class 1 display function." << std::endl;
    }
};

class BaseClass2 {
public:
    void display2() {
        std::cout << "Base Class 2 display function." << std::endl;
    }
};

class DerivedClass : public BaseClass1, public BaseClass2 {
public:
    void display3() {
        std::cout << "Derived Class display function." << std::endl;
    }
};

int main() {
    DerivedClass obj;

    obj.display1();  // Accessing member of BaseClass1
    obj.display2();  // Accessing member of BaseClass2
    obj.display3();  // Accessing member of DerivedClass

    return 0;
}
