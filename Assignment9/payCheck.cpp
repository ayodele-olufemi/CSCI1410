/*
Program: 	A C++ program to compute employees paycheck
Author: 	Ayodele Olufemi
Date: 		11/03/2021
*/

#include <iostream>
#include <iomanip>
using namespace std;

int main() {    
	// Creating variable for number of employees
	int numEmployees;
	
	// Requesting for number of employees
    cout << "Enter the number of employees: ";
    cin >> numEmployees;
	

	// Creating needed variables for use in loop
	int i = 1;
	float hourlyRate;
	float hoursWorked;
	float grossPay;
	float tax;
	float netPay;
	

	// Creating a loop to compute employee's paycheck
	while (i <= numEmployees) {
		// Printing header
		cout << "------------------------Employee #" << i << "------------------------\n";

		// Requesting for employee's hourly rate
		cout << "Enter the hourly rate: ";
		cin >> hourlyRate;

		// Requesting for employee's hours worked
		cout << "Enter the hours worked: ";
		cin >> hoursWorked;
		
		// Calculating gross pay
		grossPay = hourlyRate * hoursWorked;

		// Calculating tax
		if (grossPay <= 500) {
			tax = 0;
		} else if (grossPay <= 1100) {
			tax = grossPay * 0.02;
		} else if (grossPay <= 12000) {
			tax = grossPay * 0.05;
		} else {
			tax = grossPay * 0.07;
		}

		// Calculating net pay
		netPay = grossPay - tax;

		// Printing the results
		cout << std::fixed << std::setprecision(2);
		cout << "\nHourly Rate: $" << hourlyRate << "\nHours: " << hoursWorked << " hours\nPay: $" << grossPay << "\nTax: $" << tax << "\nNet Pay: $" << netPay << "\n";
		
		// incrementing processed employee counter
		i++;
	}
 
    return 0;
}
