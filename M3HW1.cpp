// CSC 134
// M3HW1 - Silver
// McKenna Phillips
// 1/18/26

// Question 1
cout << “Question 1” << endl;
#include <iostream>
#include <string>
#include <iomanip>
#include <cstdlib>
#include <ctime>

int main() {
    std::cout << "Hello, I am the C++ program!" << std::end;
    std::cout << "Do you have a question for me? Please type yes or no." << std::end;
    
    std::string userInput;
    std::cin >> userInput;

    if (userInput == "yes") {
        std::cout << "Perfect! How can I help?" << std::end;
    }
    else if (userInput == "no") {
        std::cout << "You must be a smart cookie! Let me know if you change your mind!" << std::end;
    }
    else {
        std::cout << "Take your time!" << std::end;
    }

    return 0;
}



// Question 2
Cout << “Question 2” << endl;
int main() {
    const double tax_rate = 0.07;
    const double tip_rate = 0.15;

    double mealprice = 0.0;
    int ordertype = 0;
    double taxamount = 0.0;
    double tipamount = 0.0;
    double totalamount = 0.0;

    std::cout << "Enter the meal price: $";
    std::cin >> mealprice;
    std::cout << "Enter 1 if you are dining in or 2 if you are taking it to go: ";
    std::cin >> ordertype;
    taxamount = mealprice * tax_rate;

    if (ordertype == 1) {
        tipamount = mealprice * tip_rate;
    }
    else {
        tipamount = 0.0;

    }

    totalamount = mealprice + taxamount + tipamount;

    std::cout << std::fixed << std::setprecision(2);
    std::cout << "\n----------RECEIPT----------" << std::end;
    std::cout << "meal price: $" << mealprice << std::end;
    std::cout << "tax (7%): $" << taxamount << std::end;
    std::cout << "tip: $" << tipamount << std::end;
    std::cout << "----------------------------" << std::end;
    std::cout << "total due: $" << totalamount << std::end;
    std::cout << "----------------------------" << std::end;

    return 0,
}



// Question 4
cout << “Question 4” << endl;
int main() {
    std::srand(std::time(0));
    int num1 = std::rand() % 10;
    int num2 = std::rand() % 10;
    int correctanswer = num1 + num2;
    int useranswer = 0;

    std::cout << "What is " << num1 << " plus " << num2 << "?\n";
    std::cin >> useranswer;
    
    if (useranswer == correctanswer) {
        std::cout << "correct!\n";
    }
    else {
        std::cout << "incorrect.\n";
    }

    return 0;
}
