// CSC 134
// M5T2 - More Practice with Functions
// McKenna Phillips
// Partner: AI navigator
// 11-8-26

#include <iostream>
using namespace std;

int square(int num);
void printAnswerLine(int number, int squared);

int main() {
    for (int i = 1; i <= 10; i++) {
        int result = square(i);
        printAnswerLine(i, result);
    }
    return 0;
}

int square(int num) {
    return num * num;
}

void printAnswerLine(int number, int squared) {
    cout << number << " squared is " << squared << endl;
}