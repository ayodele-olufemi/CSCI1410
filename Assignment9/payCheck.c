/*
Program: 	A C program to compute employees paycheck
Author: 	Ayodele Olufemi
Date: 		11/03/2021
*/

#include<stdio.h>

int main() {

	// Creating variable for number of employees
	int numEmployees;

	// Requesting for number of employees
	printf("Enter the number of employees: ");
	scanf("%d", &numEmployees);

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
		printf("------------------------Employee #%d------------------------\n", i);

		// Requesting for employee's hourly rate
		printf("Enter the hourly rate: ");
		scanf("%f", &hourlyRate);

		// Requesting for employee's hours worked
		printf("Enter the hours worked: ");
		scanf("%f", &hoursWorked);
		
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
		printf("\nHourly Rate: $%.2f\nHours: %.2f hours\nPay: $%.2f\nTax: $%.2f\nNet Pay: $%.2f\n", hourlyRate, hoursWorked, grossPay, tax, netPay);
		
		// incrementing processed employee counter
		i++;
	}

	return 0;
}
