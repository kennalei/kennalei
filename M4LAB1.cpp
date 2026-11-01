// M4LAB1
// McKenna Phillips
// 11/1/26
// CSC 134

#include <iostream>
using namespace std;

int main () {
    cout << "M4LAB\n";
    int height, width;

    height = 5;
    width = 5;

    cout << "One row" << endl;
    for (int i=0; i < width; i++) {
        cout << "*" << " ";
    }
    cout << endl;

    cout << "One column" << endl;
    for (int j=0; j < height; j++) {
        cout << "*" << endl;
    }

    cout << "The entire block" << endl;
    for (int j=0; j < height; j++) {
        for (int i=0; i < width; i++) {
            cout << "*" << " ";
        }
        cout << endl;
    }
    
}