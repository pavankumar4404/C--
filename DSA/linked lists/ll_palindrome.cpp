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

bool palindrome(Node* &head){

    // 1. Finding middle
    Node* slow = head;
    Node* fast = head;
    while(fast && fast->next){
        slow = slow->next;
        fast = fast->next->next;
    }

    // 2. break from middle
    Node* cur = slow->next;
    Node* prev = slow;
    slow->next = NULL;
    
    // 3. reversing 2nd part
    while(cur){
        Node* nextnode = cur->next;
        cur->next = prev;
        prev = cur;
        cur = nextnode;
    }

    // 4. compare
    Node* h1 = head;
    Node* h2 = prev;
    while(h2){
        if(h1->val != h2->val){
            return false;
        }
        h1 = h1->next;
        h2 = h2->next;
    }
    return true;
}

int main(){

    LinkedList ll;
    ll.insertAtTail(1);
    ll.insertAtTail(2);
    ll.insertAtTail(3);
    ll.insertAtTail(3);
    ll.insertAtTail(2);
    ll.insertAtTail(1);
    ll.display();
    cout<<palindrome(ll.head)<<endl;
}