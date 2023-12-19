#include <iostream>
using namespace std;

class Node{
public:
    Node* prev;
    int val;
    Node* next;
    
    Node(int data){
        val = data;
        prev = NULL;
        next = NULL;
    }
};

class DLL{
public:
    Node* head;
    Node* tail;
    DLL(){
        head = NULL;
        tail = NULL;
    }

    void display(){
        Node* temp = head;
        while(temp != NULL){
            cout<<temp->val<<" ";
            temp = temp->next;
        }
        cout<<endl;
    }

    void insertAtTail(int val){
        Node* new_node = new Node(val);
        if(tail == NULL){
            head = new_node;
            tail = new_node;
            return;
        }
        tail->next = new_node;
        new_node->prev = tail;
        tail = new_node;
    }

};

bool isPalindrome(Node* &head, Node* &tail){
    while(head != tail && head->prev != tail){
        if(head->val != tail->val){
            return false;
        }
        head = head->next;
        tail = tail->prev;
    }
    return true;
}

int main(){
    DLL dll;
    dll.insertAtTail(1);
    dll.insertAtTail(2);
    dll.insertAtTail(4);
    dll.insertAtTail(4);
    dll.insertAtTail(4);
    dll.insertAtTail(2);
    dll.insertAtTail(1);
    dll.display();

    cout<<isPalindrome(dll.head, dll.tail);
}