// delete kth node from end (two pointer approach)
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

void del(Node* &head, int k){
    Node* ptr1 = head;
    Node* ptr2 = head;

    // move ptr2 by k steps ahead of ptr1
    int count = k;
    while(count--){
        ptr2 = ptr2->next;
        cout<<ptr2->val<<" ";
    }

    if(ptr2 == NULL){   //k is equal to length, delete head node
        Node* temp = head;
        head = head->next;
        free(temp);
        return;
    }

    //ptr2->next at null, ptr1->next is to be deleted
    while(ptr2->next != NULL){
        ptr1 = ptr1->next;
        ptr2 = ptr2->next;
    }

    //delete ptr1->next
    Node* temp = ptr1->next;
    ptr1->next = ptr1->next->next;
    free(temp);
    return;
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
    del(ll.head, 4);
    ll.display();
}