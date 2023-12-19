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

void rev_display(Node* &head){
    if(head == nullptr || head->next == nullptr){
        return;
    }
    rev_display(head->next);
    cout<<head->val<<" ";
}

Node* rec_reverse_list(Node* &head){
    if(head == nullptr || head->next == nullptr){
        return head;
    }
    Node* new_head = rec_reverse_list(head->next);
    head->next->next = head;
    head ->next = NULL;
    return new_head;
}

Node* rev_list(Node* &head){
    Node* pre = NULL;
    Node* cur = head;
    while(cur){
        Node* nex = cur->next; 
        cur->next = pre;
        pre = cur;
        cur = nex;
    }
    return pre;
}

int main(){
    LinkedList ll;

    ll.insertAtTail(1);
    ll.insertAtTail(2);
    ll.insertAtTail(3);
    ll.insertAtTail(4);
    ll.insertAtTail(5);
    ll.display();

    // rev_display(ll.head);
    
    ll.head = rev_list(ll.head);
    ll.display();
    ll.head = rec_reverse_list(ll.head);
    ll.display();
}