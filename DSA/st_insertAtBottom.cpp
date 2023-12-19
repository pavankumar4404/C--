#include <iostream>
#include <stack>
using namespace std;

void ins(int x, stack<int> &original){
    stack<int> temp;
    while(!original.empty()){
        temp.push(original.top());
        original.pop();
    }
    original.push(x);
    while(!temp.empty()){
        original.push(temp.top());
        temp.pop();
    }
}

void f(int x, stack<int> &original){
    if(original.empty()){
        original.push(x);
        return;
    }
    int cur = original.top();
    original.pop();
    f(x, original);
    original.push(cur);
}

int main(){
    stack<int> original;
    original.push(1);
    original.push(2);
    original.push(3);
    original.push(4);
    // ins(0,original);
    f(0,original);
    while(!original.empty()){
        cout<<original.top()<<"\n";
        original.pop();
    }
    return 0;
}