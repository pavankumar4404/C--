#include<iostream>
using namespace std;

class abc{
    int a;
    public:
        abc(){
            cout<<"default constructor called"<<endl;
        }
        abc(abc& cc){
            cout<<"copy constructor called"<<endl;
            a=cc.a;
        }
        void setdata(int x){
            a=x;
        }
        int getdata(){
            return a;
        }
};

int main(){
    int n;
    // cin>>n;
    abc ob1;
    ob1.setdata(78);
    cout<<"ob1 :"<<ob1.getdata()<<endl;
    abc ob2=ob1;
    cout<<"ob2 copy :"<<ob2.getdata();
    return 0;
}