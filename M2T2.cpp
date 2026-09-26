/*
CSC 134
M2T2
9/25/26
*/

#include <iostream>
#include <iomanip>
using namespace std;

int main () {
// handle receipt

//declare variables
string  item = "Cupcake"
double item_price = 5.99
double tax_percent = 0.08
double tax_amount;
double total;

//greet and take order
cout << "Welcome to the cupcake counter!" << endl;
cout << "You ordered one " << item << "." endl; 

//calculate meal price
//calculate total price
tax_amount = item_price * tax_percent;
total = item_price + tax_amount;

//print receipt
cout << setprecision(2) << fixed;
cout << "Thank you for shopping with us!" << endl;
cout << "---------------------------------" << endl;
cout << item << "\t\t$" << item_price        << endl;
cout << "Tax" << "\t\t$" << tax_amount       << endl;
cout << "---------------------------------" << endl;
cout << "Total" << "\t\t$" << total << endl;
cout << endl;

return 0;
}