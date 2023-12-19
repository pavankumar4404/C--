#include <bits/stdc++.h>
using namespace std;

int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6, 7};
    int n;
    cin >> n;
    int len = sizeof(arr) / sizeof(int);
    int temp[len-1];
    
    for (int i = 0; i < len - n; i++)
    {
        temp[i] = arr[i + n];
    }
    
    for (int j = 0; j < n; j++)
    {
        temp[len - n + j] = arr[j];
    }
        
    for (int k = 0; k < len; k++)
    {
        arr[k]=temp[k];
    }
    for (int j = 0; j < len; j++)
    {
        cout << arr[j];
    }
    cout<<endl;
}