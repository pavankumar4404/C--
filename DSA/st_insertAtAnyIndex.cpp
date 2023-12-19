#include<iostream>
#include<stack>
using namespace std;

void ins(int x, int idx, stack <int> &ori){
    stack<int> temp;
    int n=ori.size()-idx;
    for(int i=0; i<n; i++){
        int curr=ori.top();
        ori.pop();
        temp.push(curr);
    }
    ori.push(x);
    while(!temp.empty()){
        ori.push(temp.top());
        temp.pop();
    }
}

void f(int x, int idx, stack<int> &ori){
    const int n=ori.size()-idx;
    if(ori.size()==n){
        ori.push(x);
        return;
    }
    int curr=ori.top();
    ori.pop();
    f(x,idx,ori);
    ori.push(curr);
}

int main(){
    stack<int> original;
    original.push(1);
    original.push(2);
    original.push(3);
    original.push(4);
    f(5,2,original);

    while(!original.empty()){
        cout<<original.top()<<"\n";
        original.pop();
    }
    return 0;
}