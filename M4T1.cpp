// M4T1
// McKenna Phillips
// 11/1/26
// CSC 134

#include <iostream>
using namespace std;
  
int main()
{

    int number = 5;

    int i = 0;
    while (i < number) {
        cout << "Hello" << endl;
        i++;
    }

    cout << "That is all!" << endl;

    const int MIN_NUMBER = 1;
    const int MAX_NUMBER = 10;

    int num = MIN_NUMBER;
    cout << "Number\tNumber Squared" << endl;

    while (num <= MAX_NUMBER) {
        cout << num << "\t\t" << num * num << endl;
        num++;
    }

    return 0; 
}