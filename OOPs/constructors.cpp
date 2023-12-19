#include <iostream>
using namespace std;

class MyClass {
public:
    MyClass() {
        cout << "Default constructor called." << endl;
        data = 0;
    }

    int getData() {
        return data;
    }

    ~MyClass(){
        cout<<"Destructor called.";
    }

private:
    int data;
};

int main() {
    // Create a MyClass object using the default constructor
    MyClass obj;

    // Print the data for obj
    cout << "Data for obj: " << obj.getData() << endl;

    return 0;
}
