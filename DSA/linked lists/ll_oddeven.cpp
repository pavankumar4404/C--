#include <iostream>

// Definition for singly-linked list.
struct ListNode {
    int val;
    ListNode* next;
    ListNode(int x) : val(x), next(nullptr) {}
};

// Function to insert a new node at the end of the linked list.
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
    std::cout << "NULL" << std::endl;
}

class Solution {
public:
    ListNode* oddEvenList(ListNode* head) {
        if(!head || !head->next || !head->next->next) return head; // LL is empty, only 1 node, only 2 nodes
        ListNode* odd = head;
        ListNode* evenhead = head->next;
        ListNode* even = head->next;
        while(odd!=nullptr && odd->next!=nullptr && odd->next->next!=nullptr){
            odd->next = even->next;
            odd = odd->next;
            even->next = odd->next;
            even = even->next;
        }
        odd->next = evenhead;
        return head;
    }
};

int main() {
    Solution solution;
    ListNode* head = nullptr;

    // Example: Creating a linked list 1 -> 2 -> 3 -> 4 -> 5 -> nullptr
    for (int i = 1; i <= 6; ++i) {
        append(head, i);
    }

    std::cout << "Original Linked List: ";
    printList(head);

    head = solution.oddEvenList(head);

    std::cout << "Rearranged Linked List: ";
    printList(head);

    // Don't forget to free the memory occupied by the linked list to avoid memory leaks.
    while (head) {
        ListNode* temp = head;
        head = head->next;
        delete temp;
    }

    return 0;
}
