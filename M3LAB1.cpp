// if statements
// CSC 134 
// M3LAB1
// McKenna Phillips
// 10-11-26

#include <iostream>
using namespace std;

int main() {

  cout << "Hello World!" << endl;

  return 0;
}




// if statements 2

#include <iostream>
using namespace std;

int main() {

  int choice; 

  cout << "Do you choose Dog 1 or Dog 2?" << endl;
  cout << "Type 1 or 2: "; 
  cin >> choice;

  if (1 == choice) {
  	cout << "You chose Dog 1" << endl;
  }
  else if (2 == choice) {
  	cout << "You chose Dog 2" << endl;
  }
  else {
  	cout << "I'm sorry, we do not have that dog here." << endl;
  }

  cout << "Thanks for playing!" << endl;

  return 0;
} 




// if statements 3

#include <iostream>
using namespace std;

void chooseDog1();
void chooseDog2();
void chooseDog3();

int main() {
  
  int choices; 

  cout << "Do you choose Dog 1, Dog 2, or Dog 3?" << endl;
  cout << "Type 1, 2 or 3: "; 
  cin >> choices;

  if (1 == choices) {
    chooseDog1();
  }
  else if (2 == choices) {
    chooseDog2();
  }
  else if (3 == choices) {
    chooseDog3();
  }
  else {
    cout << "I'm sorry, we do not have that dog here." << endl;
  }

  cout << "Thank you for playing!" << endl;
  return 0;

} 

void chooseDog1() {
  cout << "You chose Dog 1" << endl;
  cout << "You chose Pepper the Pitbull!" << endl;
}

void chooseDog2() {
  cout << "You chose Dog 2" << endl;
  cout << "You chose Goose the Golden Retriever!" << endl;
}
void chooseDog3() {
  cout << "You chose Dog 3" << endl;
  cout << "You chose Buster the Bloodhound!" << endl;
}