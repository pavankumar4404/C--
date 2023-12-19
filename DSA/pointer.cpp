#include <iostream>
using namespace std;

int main()
{
    float a = 10.3;
    float *p = &a;
    cout << "Address of variable 'a' is : " << p << " and the value is " << *p << endl;
}