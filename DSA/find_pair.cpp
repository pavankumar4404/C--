// two pointer method:
// if sum is more than target then decrement j
// if sum is equal then print 
// if sum is less then increment i

#include <iostream>
using namespace std;

int main(){
    int arr[]={0,1,3,4,5,6,8,9,10,12,14};
    int length=sizeof(arr)/sizeof(int);
    int k=10;
    int i=0;
    int j=length-1;
    while(i<j){
        if(arr[i]+arr[j] > 10) j--;
        else if(arr[i]+arr[j] < 10) i++;
        else{
            cout<<arr[i]<<' '<<arr[j]<<endl;
            i++;
            j--;
        }
    }
    return 0;
}