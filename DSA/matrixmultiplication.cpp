#include <iostream>
using namespace std;
int main(){
    int r1,r2,c1,c2;
    cin>>r1>>c1;
    int a[r1][c1];
    for(int i=0;i<r1;i++){
        for(int j=0;j<c1;j++){
            cin>>a[i][j];
        }
    }
    cin>>r2>>c2;
    int b[r2][c2];
    for(int i=0;i<r2;i++){
        for(int j=0;j<c2;j++){
            cin>>b[i][j];
        }
    }
    if(c1==r2){
        int c[r1][c2];
        int e=0;
        for(int i=0;i<r1;i++){
            for(int j=0;j<c2;j++){
                for(int k=0;k<r2;k++){
                    e+=a[i][k]*b[k][j];
                }
                c[i][j]=e;
                e=0;
            }
        }
        for(int i=0;i<r1;i++){
            for(int j=0;j<c2;j++){
                cout<<c[i][j]<<" ";
            }
            cout<<endl;
        }
    }
    else cout<<"Matrix multiplcation not possible"<<endl;
    return 0;
}