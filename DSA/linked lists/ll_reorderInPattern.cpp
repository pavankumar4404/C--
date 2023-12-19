// 1->2->3->4->5->6 => 1->6->2->5->3->4

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

Node* reorder(Node* &head){
    // 1. middle
    Node* slow = head;
    Node* fast = head;
    while(fast && fast->next){
        slow = slow->next;
        fast = fast->next->next;
    }

    // 2. break and reverse 2nd part
    Node* cur = slow->next;
    Node* prev = slow;
    prev->next = NULL;

    while(cur){
        Node* next = cur->next;
        cur->next = prev;
        prev = cur;
        cur = next;
    }

    // 3. Merging 
    Node* h1 = head;
    Node* h2 = prev;
    while(h1 != h2){
        Node* temp = h1->next;
        h1->next = h2;
        h1 = h2;
        h2 = temp;
    }
    return head;
}

int main(){

    LinkedList ll;
    ll.insertAtTail(1);
    ll.insertAtTail(2);
    ll.insertAtTail(3);
    ll.insertAtTail(4);
    ll.insertAtTail(5);
    // ll.insertAtTail(6);
    ll.display();

    ll.head = reorder(ll.head);
    ll.display();
}
