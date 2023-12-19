#include <bits/stdc++.h>
// #include <cmath>
using namespace std;

class Armstrong {
    private:
        int number;
    public:
        // Armstrong(int n) {
        //     number = n;
        // }
        bool isArmstrong(int number) {
            int digits = 0, sum = 0;
            int temp = number;
            while(temp > 0) {
                digits++;
                temp /= 10;
            }
            temp = number;
            while(temp > 0) {
                int digit = temp % 10;
                float power=pow(digit, digits);
                sum += power;
                temp /= 10;
            }
            return sum == number;
        }
};

int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;
    Armstrong a;
    if(a.isArmstrong(n)) {
        cout << n << " is an Armstrong number." << endl;
    } else {
        cout << n << " is not an Armstrong number." << endl;
    }
    return 0;
}
