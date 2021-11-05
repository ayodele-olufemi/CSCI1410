#include <stdio.h>

/*
Program:	A program to display information
Author:		Ayodele Olufemi
Date:		10/25/2021
*/

int main() {
	// Creating variables to hold the information

	char name[50] = "Ayodele Emmanuel Olufemi";
	char address[150] = "10680 Tamarack Street NW, Coon Rapids, MN, 55433";
	char phoneNumber[15] = "5073512268";
	char collegeMajor[50] = "Cybersecurity";
	

	// Displaying the information
	printf("Name: %s\nAddress: %s\nTelephone Number: %s\nCollege Major: %s\n", name, address, phoneNumber, collegeMajor);

	return 0;
}
