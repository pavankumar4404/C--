#include <iostream>
#include <vector>
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

Node* merge(Node* head1, Node* &head2){
    Node* dummy = new Node(-1);
    Node* ptr1 = head1;
    Node* ptr2 = head2;
    Node* ptr3 = dummy;

    while(ptr1 && ptr2){
        if(ptr1->val < ptr2->val){
            ptr3->next = ptr1;
            ptr1 = ptr1->next;
        }
        else{
            ptr3->next = ptr2;
            ptr2 = ptr2->next;
        }
        ptr3 = ptr3->next;
    }

    if(ptr1){
        ptr3->next = ptr1;
    }
    else{
        ptr3->next = ptr2;
    }
    
    return dummy->next;
}

Node* mergeK_ll(vector <Node*> &list){
    if(list.size()==0){
        return NULL;
    }

    else{
        while(list.size() > 1){
            Node* merged_head = merge(list[0],list[1]);
            list.push_back(merged_head);
            list.erase(list.begin());
            list.erase(list.begin());
        }

        return list[0];
    }
}

int main(){
    LinkedList l1;
    l1.insertAtTail(1);
    l1.insertAtTail(7);
    l1.insertAtTail(8);
    l1.display();

    LinkedList l2;
    l2.insertAtTail(2);
    l2.insertAtTail(4);
    l2.insertAtTail(5);
    l2.display();

    LinkedList l3;
    l3.insertAtTail(3);
    l3.insertAtTail(6);
    l3.display();

    vector<Node*> list;
    list.push_back(l1.head);
    list.push_back(l2.head);
    list.push_back(l3.head);

    LinkedList ll;
    ll.head = mergeK_ll(list);
    ll.display();

}