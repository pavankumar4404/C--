#include <iostream>

class Shape {
public:
    virtual void draw() {
        std::cout << "Drawing a shape." << std::endl;
    }
};

class Circle : public Shape {
public:
    void draw() override {
        std::cout << "Drawing a circle." << std::endl;
    }
};

class Rectangle : public Shape {
public:
    void draw() override {
        std::cout << "Drawing a rectangle." << std::endl;
    }
};

int main() {
    Circle circle;
    Rectangle rectangle;

    Shape* shapePtr = nullptr;  // Declare a base class pointer

    shapePtr = &circle;  // Assign the address of Circle object to the base class pointer
    shapePtr->draw();   // Call the draw() function on the Circle object through the base class pointer

    shapePtr = &rectangle;  // Assign the address of Rectangle object to the base class pointer
    shapePtr->draw();       // Call the draw() function on the Rectangle object through the base class pointer

    return 0;
}
