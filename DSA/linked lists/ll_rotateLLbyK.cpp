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

Node* rotate(Node* &head, int k){
    // 1. find length(n)
    int n = 0;
    // 2. find tail
    Node* tail = head;
    while(tail->next){
        n++;
        tail = tail->next;
    }
    n++;  // to include last node

    k = k%10;
    if(k == 0){
        return head;
    }

    tail->next = head;

    // 3. traverse n-k nodes
    Node* temp = head;
    for(int i=1; i<n-k; i++){
        temp = temp->next;
    }

    // 4. new head
    head = temp->next;
    temp->next = NULL;
    return head;
}

int main(){

    LinkedList ll;
    ll.insertAtTail(1);
    ll.insertAtTail(2);
    ll.insertAtTail(3);
    ll.insertAtTail(4);
    ll.insertAtTail(5);
    ll.insertAtTail(6);
    ll.display();

    ll.head = rotate(ll.head, 2);
    ll.display();
}