#include <iostream>
using namespace std;

//creation
class Node{
public:
    int data;
    Node* next;
    Node(int data){
        this->data=data;
        this->next=NULL;
    }
};

//insertion at beginning
void insertathead(Node* &head,int d){
    Node* temp = new Node(d);
    temp -> next = head;
    head = temp;
}

// insertion at end when tail pointer is given
void insertAtTail(Node* &tail, int d){
    Node* temp = new Node(d);
    tail -> next = temp;
    tail = temp;
}

void insertatend(Node* head, int value){  //when head is given
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

void insertAtK(Node* head, int value, int k){
    Node* new_node = new Node(value);
    Node* temp = head;
    while(k!=1){
        temp = temp->next;
        k--;
    }
    new_node->next = temp->next;
    temp->next = new_node;
    return;
}

//traversing
void print(Node* &head){
    Node* temp = head;

    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<endl;
}

void deleteFromHead(Node* &head){
    Node* temp = head;
    head = head->next;
    delete temp;
    return;
}

void deleteFromTail(Node* &head){
    Node* temp = head;
    while(temp->next->next != NULL){
        temp = temp->next;
    }
    
    delete temp->next;
    temp->next = NULL;
    return;
}

void deleteAtK(Node* head, int k){
    Node* cur = head;
    while(k!=1){
        cur = cur->next;
        k--;
    }
    Node* temp = cur->next;
    cur->next = temp->next;
    free(temp);
    return;
}

int main(){
    Node* node1 = new Node(0);
    // cout<<node1->data<<endl;
    // cout<<node1->next<<endl;

    Node* head = node1;
    print(head);
    insertatend(head,1);
    insertatend(head,2);
    insertatend(head,4);
    insertatend(head,5);
    insertatend(head,6);
    print(head);

    insertAtK(head,3,3);
    print(head);
    // Node* tail=node1;
    // insertatend(tail,1);
    // print(head);

    deleteFromHead(head);
    print(head);

    deleteFromTail(head);
    print(head);

    deleteAtK(head,3);
    print(head);
    return 0;
}