#include<iostream>
using namespace std;

class MyClass {
private:
    int data;

public:
    MyClass(int value) { 
        data=value;
    }

    // Declare the friend function
    friend void friendFunction(MyClass obj);
};

// Define the friend function
void friendFunction(MyClass obj) {
    std::cout << "Friend function accessed the private data: " << obj.data << std::endl;
}

int main() {
    MyClass myObj(42);

    friendFunction(myObj);  // Call the friend function

    return 0;
}
