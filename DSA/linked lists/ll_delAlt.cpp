// delete alternate nodes

#include <iostream>
using namespace std;

class Node{
public:
    int val;
    Node* next;

    Node(int data){
        val = data;
        next = NULL;
    }
};

class LinkedList{
public:
    Node* head;

    LinkedList(){
        head = NULL;
    }

    void insertAtTail(int value){
        Node* new_node = new Node(value);
        if(head == NULL){       //empty list
            head =  new_node;
            return;
        }
        Node* temp = head;
        while(temp->next != NULL){
            temp = temp->next;
        }
        temp->next = new_node;
    }

    void display(){
        Node* temp = head;
        while(temp){
            cout<<temp->val<<" -> ";
            temp = temp->next;
        }cout<<"NULL"<<endl;
    }
};

void deleteAlternate(Node* &head){
    Node* cur = head;
    while(cur!=NULL && cur->next!=NULL){
        Node* temp = cur->next;
        cur->next = temp->next;
        free(temp);        
        cur = cur->next;
    }
    return;
}

void rec_delAlt(Node* &head){
    if(head == nullptr || head->next == nullptr){
        return;
    }
    Node* cur = head;
    Node* temp = cur->next;
    cur->next = temp->next;
    free(temp);
    rec_delAlt(head->next);
}

int main(){
    LinkedList ll;

    ll.insertAtTail(1);
    ll.insertAtTail(2);
    ll.insertAtTail(3);
    ll.insertAtTail(4);
    ll.insertAtTail(5);
    ll.display();

    rec_delAlt(ll.head);
    ll.display();
}