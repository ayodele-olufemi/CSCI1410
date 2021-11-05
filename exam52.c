#include <stdio.h>

/*
Program:	A program to calculate subtotal, sales tax and the total of a sale
Author:		Ayodele Olufemi
Date:		10/25/2021
*/

int main() {
	// Creating needed variables
	
	int numberOfItems = 5;
	float taxPercent = 7.0;
	float price;
	float salesTax;
	float subTotal = 0;
	float salesTotal = 0;

	// Using a for loop to get price of each item
	
	for (int i = 1; i <= numberOfItems; i++) {
		printf("Enter the price of item %d: ", i);
		scanf("%f",&price);
		subTotal += price;
	}
	// Calculating Sales tax and Sales total

	salesTax = subTotal * (taxPercent / 100.0);
	salesTotal = subTotal + salesTax;

	// Printing the results
	printf("\nSub Total: $%.2f\nSales Tax: $%.2f\nTotal: $%.2f\n", subTotal, salesTax, salesTotal);

	return 0;
}
