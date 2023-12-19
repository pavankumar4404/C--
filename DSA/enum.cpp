#include <iostream>
using namespace std;

enum week { Sunday, Monday, Tuesday, Wednesday, Thursday, Friday, Saturday } today;

int main(){
    today = Wednesday;
    cout << "Day " << today+1<<endl;
    return 0;
}