/*
CSC 134
M5LAB1 - Choose Your Own Adventure
McKenna Phillips
11-8-26
*/

#include <iostream>
using namespace std;

void main_menu();
void choice_front_door();
void choice_back_door();
void choice_go_home();
void make_friends();
void get_taco_bell();
void get_chick_fil_a();

int main() {
  cout << "M5LAB1 - Choose Your Own Adventure" << endl;
  main_menu();
  cout << "Thanks for playing!" << endl;
  return 0; 
}

void main_menu() {
  cout << "Main Menu" << endl;
  cout << "You're in front of a spooky old house..." << endl;
  cout << "Do you:" << endl;
  cout << "1. Try the front door" << endl;
  cout << "2. Sneak around back" << endl;
  cout << "3. Forget it, and go home" << endl;
  cout << "4. [Quit]" << endl;
  cout << "Choose: ";
  int choice;
  cin >> choice;
  if (1 == choice) {
    choice_front_door();
  } else if (2 == choice) {
    choice_back_door();
  } else if (3 == choice) {
    choice_go_home();
  } else if (4 == choice) {
    cout << "Ok, quitting game" << endl;
    return; // go back to main()
  } else {
    cout << "That's not a valid choice, please try again." << endl;
    cin.ignore(); 
    main_menu();  
  }
}

void choice_front_door() {
  cout << "Try the front door." << endl;
  cout << "It's locked. " << endl;
  cout << "Do you:" << endl;
  cout << "1. Check around back" << endl;
  cout << "2. Give up and go home" << endl;
  int choice;
  cout << "Choose: ";
  cin >> choice;
  if (1 == choice) {
    choice_back_door();
  } else if (2 == choice) {
    choice_go_home();
  }
}

void choice_back_door() {
    cout << "You tip toe to the back door to find it unlocked." << endl;
    cout << "You get on your hands and knees and crawl inside." << endl;
    cout << "You see a dog running at you." << endl;
    cout << "Do you:" << endl;
    cout << "1. Convince the dog you are its friend" << endl;
    cout << "2. Scream and run home" << endl;
    int choice;
    cout << "Choose: ";
    cin >> choice;
    if (1 == choice) {
        make_friends();
    } else if (2 == choice) {
        choice_go_home();
    }
}

void choice_go_home() {
    cout << "You decide to go home." << endl;
    cout << "Your stomach grumbles because you are hungry." << endl;
    cout << "You decide to grab food." << endl;
    cout << "Do you:" << endl;
    cout << "1. Get Taco Bell" << endl;
    cout << "2. Get Chick Fil A" << endl;
    int choice;
    cout << "Choose: ";
    cin >> choice;
    if (1 == choice) {
        get_taco_bell();
    } else if (2 == choice) {
        get_chick_fil_a();
    }
}
