#include <bits/stdc++.h>
using namespace std;

string pal(string a)
{
    for (int i = 0; i < (a.length()) / 2; i++)
    {
        if (a[i] != a[a.length() - i - 1])
        {
            return "No";
        }
    }
    return "Yes";
}
int main()
{
    string a;
    cout << "Enter a string : ";
    cin >> a;
    cout << pal(a) << endl;
}