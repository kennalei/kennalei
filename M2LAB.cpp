/*
CSC 134
M2LAB
9/26/26
*/

# include <iostream>
# include <iomanip>
using namespace std;

int main()
{
// constants
const double COST_PER_CUBIC_FOOT = 0.23;
const double CHARGE_PER_CUBIC_FOOT = 0.5;

// variables
double length, 
       width,
       height,
       volume, 
       cost,
       charge,
       profit;

cout << setprecision(2) << fixed << showpoint;

// prompt user for input
cout << "Enter the dimensions of the crate (in feet):\n";
cout << "Length";
cin >> length;
cout << "Width";
cin >> width;
cout << "Height";
cin >> height;

// calculations
volume = length * width * height;
cost = volume * COST_PER_CUBIC_FOOT;
charge = volume * CHARGE_PER_CUBIC_FOOT;
profit = charge - cost;

// display
cout << "The volume of the crate is ";
cout << volume << " cubic feet.\n";
cout << "Cost to build: $" << cost << endl;
cout << "Charge to customer: $" << charge << endl;
cout << "Profit: $" << profit << endl;

return 0;
}
