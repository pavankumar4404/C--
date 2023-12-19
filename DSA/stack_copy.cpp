#include <iostream>
#include <stack>
using namespace std;

stack<int> copyStack(stack<int> &input){
    stack<int> temp;
    while(not input.empty()){
        int curr=input.top();
        input.pop();
        temp.push(curr);
    }
    stack<int> result;
    while(not temp.empty()){
        int curr=temp.top();
        temp.pop();
        result.push(curr);
    }
    return result;
}

void f(stack<int> &input, stack<int> &result){
    if(input.empty()){
        return;
    }
    int curr = input.top();
    input.pop();
    f(input,result);
    result.push(curr);
}

int main(){
    stack<int> st;
    st.push(1);
    st.push(2);
    st.push(3);
    st.push(4);
    // stack<int> res=copyStack(st);

    stack<int> res;
    f(st,res);
    while(not res.empty()){
        cout<<res.top()<<endl;
        res.pop();
    }
    return 0;
}