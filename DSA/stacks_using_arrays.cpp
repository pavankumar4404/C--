#include <iostream>
using namespace std;

class stack{
    int capacity;
    int top;
    int* arr;
public:
    stack(int c){
        this->capacity = c;
        arr = new int[c];
        this -> top = -1;
    }

    void push(int data){
        if(this -> top == capacity-1){
            cout<<"Overflow\n";
            return;
        }
        this -> top++;
        arr[this -> top] = data;
    }

    int pop() {
        if(this->top == -1){
            cout<<"Underflow/n";
            return INT_FAST8_MIN;
        }
        this -> top--;
    }
    
    int s_top(){
        if(this -> top == -1){
            cout<<"Underflow\n";
            return INT8_MIN;
        }
        return arr[this -> top];
    }

    bool isEmpty(){
        return this -> top == -1;
    }

    int size(){
        return this -> top + 1;
    }

};

int main(){
    stack st(5);
    st.push(1);
    st.push(2);
    st.push(3);
    cout<<st.s_top()<<endl;
    st.push(4);
    st.push(5);
    cout<<st.s_top()<<endl;
    st.push(4);
    st.pop();
    cout<<st.s_top();
}