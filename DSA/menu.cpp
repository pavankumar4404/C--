#include <iostream>
using namespace std;

int main() {
    int choice;
    double num1, num2, result;
    
    cout << "Please select an operation:\n";
    cout << "1. Addition\n";
    cout << "2. Subtraction\n";
    cout << "3. Multiplication\n";
    cout << "4. Division\n";
    cin >> choice;
    
    cout << "Please enter two numbers: ";
    cin >> num1 >> num2;
    
    switch (choice) {
        case 1:
            result = num1 + num2;
            cout << "The sum of " << num1 << " and " << num2 << " is " << result << endl;
            break;
        case 2:
            result = num1 - num2;
            cout << "The difference between " << num1 << " and " << num2 << " is " << result << endl;
            break;
        case 3:
            result = num1 * num2;
            cout << "The product of " << num1 << " and " << num2 << " is " << result << endl;
            break;
        case 4:
            if (num2 == 0) {
                cout << "Error: division by zero" << endl;
            } 
            else {
                result = num1 / num2;
                cout << "The quotient of " << num1 << " divided by " << num2 << " is " << result << endl;
            }
            break;
        default:
            cout << "Error: invalid choice" << endl;
            break;
    }
    
    return 0;
}
