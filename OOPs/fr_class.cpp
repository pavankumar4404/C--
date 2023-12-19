#include <iostream>
using namespace std;
// Forward declaration of the friend class
// class FriendClass;

// Class declaration
class MyClass {
private:
    int privateData;

public:
    MyClass(int data) : privateData(data) {}

    // Declare FriendClass as a friend class
    friend class FriendClass;
};

// Friend class definition
class FriendClass {
public:
    void displayPrivateData(MyClass& obj) {
        // FriendClass can access the private members of MyClass
        std::cout << "Private data from MyClass: " << obj.privateData << std::endl;
    }
};

// Main function
int main() {
    MyClass obj(42);
    FriendClass friendObj;

    friendObj.displayPrivateData(obj);

    return 0;
}
