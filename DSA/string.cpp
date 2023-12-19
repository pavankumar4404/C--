#include <iostream>
using namespace std;

void lower(char s[]){
    for(int i=0 ; s[i]!='\0' ; i++){
        s[i]=s[i]+32;
    }
}

int main(){
    // int s = 65;
    // cout<<char(97);
    // char s[6]={'a','b','c','\0'};
    // char s[]="str";
    // int c=0;
    // for(char i : s){
    //     // cout<<i<<' ';
    //     c++;
    // }
    // cout<<c<<endl;
    // cout<<(s);

    char s[]="ABCDEZ";
    // gets(s);
    lower(s);
    cout<<s;   
    return 0;
}