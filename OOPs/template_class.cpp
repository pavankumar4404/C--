#include <iostream>
using namespace std;

template <typename T>
class MyContainer {
private:
    T item;

public:
    MyContainer(T item) : item(item) {}

    void display() {
        std::cout << "Item: " << item << std::endl;
    }
};

int main() {
    MyContainer<int> container1(42);
    container1.display();

    MyContainer<string> container2("Hello, world!");
    container2.display();

    return 0;
}
