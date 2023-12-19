#include <iostream>
#include <fstream>
#include <string>
using namespace std;

void writeToFile(string& filename) {
    ofstream outfile(filename); // Create an output file stream

    if (outfile.is_open()) {
        outfile << "Hello, world!" << endl;
        outfile << "This is a sample text." << endl;
        outfile.close();
        cout << "File write successful." << endl;
    } else {
        cerr << "Unable to open file for writing." << endl;
    }
}

void readFromFile(string& filename) {
    ifstream infile(filename); // Create an input file stream

    if (infile.is_open()) {
        string line;
        while (getline(infile, line)) {
            cout << line << endl;
        }
        infile.close();
        cout << "File read successful." << endl;
    } else {
        cerr << "Unable to open file for reading." << endl;
    }
}

int main() {
    string filename = "sample.txt";

    writeToFile(filename);
    readFromFile(filename);

    return 0;
}
