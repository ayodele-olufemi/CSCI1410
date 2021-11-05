/*
Program: A C program to calculate the total inches of ranfall and the average rainfall per month for a given period
Author: Ayodele Olufemi
Date: 10/16/2021
*/

#include <stdio.h>

int main() {
	
	int numYears;
	int numMonths = 0;
	float monthlyRain;
	float totalRain = 0;
	float averageRain;
	const char * months[12] = {"January", "February", "March", "April", "May", "June", "July", "August", "September", "October", "November", "December"};
	
	//Prompt for the number of years
	printf("Enter the number of years: ");
	scanf("%d", &numYears);


	for (int a = 1; a <= numYears; a++) {
		printf("------------------Year %d------------------\n", a);
		for (int b = 0; b < 12; b++) {
			printf("Enter rainfall inches for %s: ", months[b]);
			scanf("%f", &monthlyRain);
			totalRain += monthlyRain;
			numMonths += 1;
		}
	}
	averageRain = totalRain / numMonths;
	printf("\nNumber of months: %d months.\nTotal inches of rainfall: %.2f inches.\nAverage rainfall per month: %.2f inches.\n", numMonths, totalRain, averageRain);

	return 0;
}
