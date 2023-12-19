#include <iostream>

// Function that accepts an integer
void printNumber(int num) {
    std::cout << "Integer: " << num << std::endl;
}

// Function that accepts a double
void printNumber(double num) {
    std::cout << "Double: " << num << std::endl;
}

// Function that accepts a character and an integer
void printNumber(char ch, int num) {
    std::cout << "Character: " << ch << ", Integer: " << num << std::endl;
}

int main() {
    printNumber(10);           // Calls the function printNumber(int)
    printNumber(3.14);         // Calls the function printNumber(double)
    printNumber('A', 20);      // Calls the function printNumber(char, int)

    return 0;
}
