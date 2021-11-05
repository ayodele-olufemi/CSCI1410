#include <stdio.h>

/*
Program:	A program to convert celsius to fahrenheit
Author:		Ayodele Olufemi
Date:		10/25/2021
*/

int main() {
	// Creating needed variables
	
	float celsius;
	float fahrenheit;

	// Getting celsius
	
	printf("Enter the temperature in celsius: ");
	scanf("%f",&celsius);

	// Calculating temperature in fahrenheit
	
	fahrenheit = ((9/5.0) * celsius) + 32;

	// Printing the results
	printf("%f", fahrenheit);

	return 0;
}
