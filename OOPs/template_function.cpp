#include <iostream>

// Template function to find the maximum of two values
template<typename A>
A findMax(A a, A b) {
    return (a > b) ? a : b;
}

int main() {
    int intMax = findMax(5, 10);
    std::cout << "Max of 5 and 10 is: " << intMax << std::endl;

    double doubleMax = findMax(3.14, 2.718);
    std::cout << "Max of 3.14 and 2.718 is: " << doubleMax << std::endl;

    char charMax = findMax('a', 'z');
    std::cout << "Max of 'a' and 'z' is: " << charMax << std::endl;

    return 0;
}
