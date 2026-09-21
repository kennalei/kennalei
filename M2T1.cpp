// CSC 134 
// M1Lab1 - The Apple Orchard
// 9/20/2026
// We're going to make the simplest possible
// "checkout" machine.

#include <iostream>
using namespace std;

int main() {
// Apple sales program
// Variables are like mailboxes
    string product = "apples"; // you do whatever name you want
    int num_apples = 10;    // int are whole numbers: 1, 2, 100000, 42
    double cost_each = 0.25;// twenty five cents, or $0.25.

// Greet Customer
cout << "Welcome to our " << product << " store!" << endl;
cout << "What's your first name? ";
cin >> first_name;
cout << "What's your last name? ";
cin >> last_name; 
full_name = first_name + " " + last_name;
cout << "Nice to meet you, " << full_name << endl;

//Ask how many they would like
cout << "How many " << product << "would you like today? ";
cin >> num_apples;

// Find out the total price
double total_cost = num_apples * cost_each;
cout << "The price for all of them is: $" << total_cost << endl;
cout << "Thank you for shopping with us!" << endl;

return 0; // no errors
)