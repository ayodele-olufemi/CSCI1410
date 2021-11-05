#include <stdio.h>

/*
Program:	A program to display day of the week given a number betwen 1 and 7
Author:		Ayodele Olufemi
Date:		10/25/2021
*/

int main() {
	// Creating needed variables
	
	const char * daysList[7] = {"Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday", "Sunday"};
	int userNum;

	// Getting userNum
	
	printf("Enter a number between 1 and 7: ");
	scanf("%d",&userNum);

	// Printing the results
	if ((userNum >= 1) && (userNum <= 7)) {
		printf("%s\n", daysList[userNum - 1]);
	} 
	else {
		printf("Error: Invalid Number entered.\n");
	}

	return 0;
}
