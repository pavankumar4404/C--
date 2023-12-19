#include <iostream>
using namespace std;

class Fibonacci {
private:
    int n;
    int *arr;
public:
    Fibonacci(int n) {
        this->n = n;
        arr = new int[n];
    }
    void series() {
        arr[0] = 0;
        arr[1] = 1;
        for (int i = 2; i < n; i++) {
            arr[i] = arr[i-1] + arr[i-2];
        }
    }
    
    void display() {
        cout << "Fibonacci Series: ";
        for (int i = 0; i < n; i++) {
            cout << arr[i] << " ";
        }
        cout << endl;
    }
};

int main() {
    int n;
    cout << "Enter the number of terms: ";
    cin >> n;
    
    Fibonacci fib(n);
    fib.series();
    fib.display();
    
    return 0;
}
