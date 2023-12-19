#include <iostream>
#include <vector>

void printSubarraySumsWithKElements(const std::vector<int>& A, int K) {
    int n = A.size();
    int left = 0; // Left pointer of the window
    int currentSum = 0; // Sum of the elements in the current window

    for (int right = 0; right < n; right++) {
        currentSum += A[right];

        // If the window size is greater than K, remove the leftmost element
        if (right - left + 1 > K) {
            currentSum -= A[left];
            left++;
        }

        // Check if the current window has K elements
        if (right - left + 1 == K) {
        //     std::cout << "Subarray [";
        //     for (int i = left; i <= right; i++) {
        //         std::cout << A[i];
        //         if (i != right) {
        //             std::cout << ", ";
        //         }
        //     }
            std::cout << currentSum << std::endl;
        }
    }
}

int main() {
    std::vector<int> A = {1, 2, 3, 4, 5};
    int K = 3;
    printSubarraySumsWithKElements(A, K);
    return 0;
}
