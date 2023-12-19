#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main(){
    string filename = "s2.txt";
    ofstream of(filename);
    if (of.is_open()){
        of<<"Hi! This is a sample text file."<<endl;
        of.close();
    }
    else cerr<<"unable to open file"<<endl;


    ifstream f(filename);
    if(f.is_open()){
        string line;
        getline(f,line);
        cout<<line<<endl;
    }
}