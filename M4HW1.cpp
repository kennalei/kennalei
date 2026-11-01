// M4HW1
// McKenna Phillips
// 11/1/26
// CSC 134

#include <iostream>

int main() {
    int number;
    std::cout << "Enter a number from 1 to 12";
    std::cin >> number;

    int i=1;

    while (i <= 12) {
        std::cout << number << " times " << i << " is " << (number * i) << ".\n";
        i++;
    }

    return 0;
}