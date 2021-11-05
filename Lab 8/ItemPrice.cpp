// Write a complete C++ program that asks for the price of an item and the quantity purchased, and
// writes out the total cost.


#include <iostream>
using namespace std;

int main() {
    // Declare your variables
    double itemPrice, totalPrice;
    int itemCount;

    // Get user input for item price
	cout << "Enter item price: ";
    cin >> itemPrice;

    // Get user input for item count
	cout << "Enter quantity: ";
    cin >> itemCount;

    // Calculate the total price
	totalPrice = itemPrice * itemCount;

    // Print out the total price to the user
	cout << "The total price is $" << totalPrice; 

    return 0;
}
