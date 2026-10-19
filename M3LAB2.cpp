// M3LAB2
// McKenna Phillips
// 10/18/26
// CSC 134

#include <iostream>
int main() {
    int grade;

    std::cout << "Enter your numerical grade (0-100): ";
    std::cin >> grade;

    if (grade >= 90 && grade <= 100) {
        std::cout << "Your letter grade is: A" << std::endl;
    }
    else if (grade >= 80 && grade <= 89) {
        std::cout << "Your letter grade is: B" << std::endl;
    }
     else if (grade >= 70 && grade <= 79) {
        std::cout << "Your letter grade is: C" << std::endl;
    }
     else if (grade >= 60 && grade <= 69) {
        std::cout << "Your letter grade is: D" << std::endl;
    }
     else if (grade >= 0 && grade <= 59) {
        std::cout << "Your letter grade is: F" << std::endl;
    }
    else {
        std::cout << "Invalid Input."
    }

    return 0;
}