#include <iostream>
using namespace std;

class Node{
public:
    int data;
    Node* next;
    Node(int d){
        data = d;
        next = NULL;
    }
};

class stack{
    Node* head;
    int capacity;
    int currSize;
public:
    stack(int c){
        capacity = c;
        currSize = 0;
        head = NULL;
    }

    bool isEmpty(){
        return head == NULL;
    }

    bool isFull(){
        return head == NULL;
    }

    void push(int data){
        if(currSize == capacity){
            cout<<"Overflow\n";
            return;
        }
        Node* new_node = new Node(data);
        new_node -> next = head;
        head = new_node;
        currSize++;
    }

    int pop(){
        if(head == NULL){
            cout<<"Underflow\n";
            return INT8_MIN;
        }
        Node* new_head = head->next;
        head->next = NULL;
        Node* tobeRemoved = head;
        int result = tobeRemoved->data;
        delete tobeRemoved;
        head = new_head;
        return result;
    }
    int getTop(){
        if(head == NULL){
            cout<<"Underflow\n";
            return INT8_MIN;
        }
        return head->data;
    }
    int size() {
        return currSize;
    }
};

int main(){
    stack st(5);
    st.push(1);
    st.push(2);
    st.push(3);
    cout<<st.getTop()<<'\n';
    st.push(3);
    st.push(5);
    cout<<st.getTop()<<"\n";
    st.push(6);

    st.pop();
    st.pop();
    cout<<st.getTop()<<"\n";
}