#include <iostream>

// Base class
class Shape {
protected:
    int width;
    int height;

public:
    Shape(int w, int h) : width(w), height(h) {}

    void display() {
        std::cout << "Width: " << width << ", Height: " << height << std::endl;
    }
};

// Derived class
class Rectangle : public Shape {
public:
    Rectangle(int w, int h) : Shape(w, h) {}

    int calculateArea() {
        return width * height;
    }
};

int main() {
    Rectangle rectangle(4, 5);

    rectangle.display();  // Call base class function
    int area = rectangle.calculateArea();  // Call derived class function

    std::cout << "Area: " << area << std::endl;

    return 0;
}
