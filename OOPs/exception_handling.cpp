#include <iostream>
using namespace std;

// int divide(int dividend, int divisor) {
    

//     return dividend / divisor;
// }

int main() {
    int dividend, divisor;
    cout << "Enter dividend: ";
    cin >> dividend;
    cout << "Enter divisor: ";
    cin >> divisor;
    try {
        
        if (divisor == 0) {
            throw "Divide by zero exception"; // Throwing an exception
        }
        int result = dividend/divisor;
        cout << "Result: " << result << endl;
    }
    catch (const char* exception) {
        cout << "Exception caught: " << exception << endl;
    }

    // int dividend = 10;
    // int divisor = 0;

    // if (divisor == 0) {
    //     std::cerr << "Error: Division by zero!" << std::endl;
    // }



    return 0;
}
