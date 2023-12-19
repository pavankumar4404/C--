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

Node* reverseDLL(Node* &head, Node* &tail){
    Node* curr = head;
    while (curr){
        Node* nextptr = curr->next;
        curr->next = curr->prev;
        curr->prev = nextptr;
        curr = nextptr;
    }
    swap(head, tail);
    return head;
}

int main(){
    DLL dll;
    dll.insertAtTail(1);
    dll.insertAtTail(2);
    dll.insertAtTail(3);
    dll.insertAtTail(5);
    dll.insertAtTail(6);
    dll.display();

    dll.head = reverseDLL(dll.head, dll.tail);
    dll.display();
}