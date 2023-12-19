#include <iostream>
using namespace std;

bool isPalindrome(int num) {
    int reversedNum = 0;
    int originalNum = num;
    
    while (num > 0) {
        int remainder = num % 10;
        reversedNum = reversedNum * 10 + remainder;
        num /= 10;
    }
    
    return (originalNum == reversedNum);
}

int main() {
    int num;
    cout << "Enter a number: ";
    cin >> num;
    
    if (isPalindrome(num)) {
        cout << num << " is a palindrome." << endl;
    } else {
        cout << num << " is not a palindrome." << endl;
    }
    
    return 0;
}
