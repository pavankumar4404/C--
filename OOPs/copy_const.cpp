#include <iostream>
using namespace std;

class C {
public:
    C() {
        cout << "Default constructor called." << endl;
        data = 0;
    }

    C( C& other) {
        cout << "Copy constructor called." << endl;
        data = other.data;
    }

    void setData(int newData) {
        data = newData;
    }

    int getData()  {
        return data;
    }

private:
    int data;
};

int main() {
    // Create a C object using the default constructor
    C obj1;

    // Set some data for obj1
    obj1.setData(42);
    cout << "Data for obj1: " << obj1.getData() << endl;

    // Create a second C object using the copy constructor
    C obj2 = obj1;

    // Print the data for obj2
    cout << "Data for obj2: " << obj2.getData() << endl;

    return 0;
}
