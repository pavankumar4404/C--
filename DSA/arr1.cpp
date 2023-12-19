#include <iostream>
using namespace std;

int main()
{
    int arr[4];
    int count = 0;
    for (int i = 0; i < 4; i++)
    {
        int a;
        cin >> a;
        arr[i] = a;
        if (a >= 10 and a <= 100)
        {
            count += 1;
        }
    }
    cout << count << endl;
    return 0;
}
