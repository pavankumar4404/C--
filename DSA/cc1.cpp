#include <iostream>
#include <vector>
using namespace std;

bool is_prime(int num) {
    if (num < 2) {
        return false;
    }
    for (int i = 2; i * i <= num; ++i) {
        if (num % i == 0) {
            return false;
        }
    }
    return true;
}

vector<int> generate_palindromic_primes(int n) {
    vector<int> palindromic_primes;
    int num = 2;
    while (palindromic_primes.size() < n) {
        if (is_prime(num)) {
            // Convert num to string for palindrome check
            string num_str = to_string(num);
            if (num_str == string(num_str.rbegin(), num_str.rend())) {
                palindromic_primes.push_back(num);
            }
        }
        ++num;
    }
    return palindromic_primes;
}

pair<int, int> count_digits(const vector<int>& palindromic_primes) {
    int even_count = 0;
    int odd_count = 0;
    for (int num : palindromic_primes) {
        if (to_string(num).length() % 2 == 0) {
            ++even_count;
        } else {
            ++odd_count;
        }
    }
    return {even_count, odd_count};
}

int main() {
    int T;
    cout << "Enter the number of test cases: ";
    cin >> T;

    for (int i = 0; i < T; ++i) {
        int N;
        cout << "Enter N for test case " << i + 1 << ": ";
        cin >> N;

        vector<int> palindromic_primes = generate_palindromic_primes(N);
        pair<int, int> digit_counts = count_digits(palindromic_primes);

        cout << digit_counts.first << " " << digit_counts.second << endl;
    }

    return 0;
}
