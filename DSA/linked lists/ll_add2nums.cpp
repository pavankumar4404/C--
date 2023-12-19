#include <iostream>
using namespace std;

struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

void append(ListNode* &head, int val) {
    ListNode* newNode = new ListNode(val);
    if (!head) {
        head = newNode;
        return;
    }
    ListNode* temp = head;
    while (temp->next) {
        temp = temp->next;
    }
    temp->next = newNode;
}

// Function to print the linked list.
void printList(ListNode* head) {
    ListNode* temp = head;
    while (temp) {
        std::cout << temp->val << " -> ";
        temp = temp->next;
    }
    std::cout << "nullptr" << std::endl;
}

class Solution {
public:
    int gen(ListNode* l) {
        if (l == NULL) {
            return 0;  // Base case
        }
        int currentDigit = l->val;
        int nextValue = gen(l->next);
        return nextValue * 10 + currentDigit;
    }

    ListNode* genLL(int k){
        ListNode* head = nullptr;
        ListNode* temp = nullptr;
        temp = head;
        while(k){
            int dig = k%10;
            ListNode* newNode = new ListNode(dig);
            if (head == nullptr) {
                head = newNode;
                temp = newNode;
            } else {
                temp->next = newNode;
                temp = newNode;
            }

        k /= 10;  // Remove the last digit from the number
        }
        return head;
    }
};

int main() {
    Solution solution;
    ListNode* head = nullptr;

    // Example: Creating a linked list 1 -> 2 -> 3 -> 4 -> 5 -> nullptr
    for (int i = 1; i <= 5; ++i) {
        append(head, i);
    }

    std::cout << "Original Linked List: ";
    printList(head);

    int k = solution.gen(head);

    std::cout << k;

    printList(solution.genLL(123));

    return 0;
}