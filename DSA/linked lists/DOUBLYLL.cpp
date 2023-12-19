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

    void insertAtHead(int val){
        Node* new_node = new Node(val);
        if(head == NULL){
            head = new_node;
            tail = new_node;
            return;
        }
        new_node->next = head;
        head->prev = new_node;
        head = new_node;
        return;
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

    void insertAtK(int val, int k){
        Node* temp = head;
        for(int i=1; i<k-1; i++){
            temp = temp->next;
        }
        Node* node = new Node(val);
        node->next = temp->next;
        temp->next = node;

        node->prev = temp;
        node->next->prev = node;
        return;
    }

    void deleteAtHead(){
        if(head == NULL) return;
        Node* temp = head;
        head = head->next;
        if(head == NULL){
            tail = NULL;
        }
        else{
            head->prev = NULL;
        }
        free(temp);
        return;
    }

    void deleteAtTail(){
        if(tail == NULL){
            return;
        }
        Node* temp = tail;
        tail = tail->prev;
        if(tail == NULL){
            head = NULL;
            return;
        }
        tail->next = NULL;
        delete temp;
        return;
    }

    void deleteAtK(int k){
        Node* temp = head;
        for(int i=1; i<k; i++){
            temp = temp->next;
        }
        temp->prev->next = temp->next;
        temp->next->prev = temp->prev;
        delete temp;
    }
};

int main(){
    DLL dll;
    dll.insertAtTail(1);
    dll.insertAtTail(2);
    dll.insertAtTail(3);
    dll.insertAtTail(5);
    dll.insertAtTail(6);
    dll.display();

    // dll.insertAtK(4,4);
    // dll.display();

    // dll.deleteAtHead();
    // dll.display();

    // dll.deleteAtTail();
    // dll.display();

    dll.deleteAtK(4);
    dll.display();
    return 0;
}