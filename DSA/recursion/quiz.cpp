#include<iostream>
using namespace std;

// void foo (int n, int sum){
//     int k = 0, j = 0;
//     if (n == 0) return;
//     k = n % 10;
//     j = n/10;
//     sum = sum + k;
//     foo (j, sum);
//     printf("%d", k);
// }

int fun (int n)

{ 

    int x=1, k; 

    if (n==1) return x; 

    for (k=1; k<n; ++k) 

    x=x + fun (k) * fun (n - k); 

    return x; 

}

int main ()
{
    // int a = 2048, sum = 0;

    // foo (a, sum);

    // printf("%d\n", sum);

    // cout<<fun(5);

    unsigned int x[4] [3] ={{1, 2, 3}, {4, 5, 6}, {7, 8, 9}, {10, 11, 12}}; 

    printf("%u, %d, %u", x+3, *(x+3),*(x+2)+3);

}