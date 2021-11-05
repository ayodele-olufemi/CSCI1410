// Write a complete C++ program to read in the user's first name and last name
// initials and write them out in a single print statement.


#include <iostream>
#include <string.h>
using namespace std;

int main() {
    // Declare your variables
    char firstInitial, secondInitial;

    // Get user input for first name initial
	cout << "Enter your first name initial: ";
    cin >> firstInitial;
    // Get user input for last name initial
	cout << "Enter your last name initial: ";
    cin >> secondInitial;
    // Print out the user's initials
	std::string s;
	s += firstInitial;
	s+=secondInitial;
	cout << s;

    return 0;
}
