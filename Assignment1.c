#include <math.h>
#include <stdio.h>

int main() {

/*
Program:	A C program to calculate the number of candy bars that 
		fit in a candy box.
Author:		Ayodele Olufemi
Date: 		10/02/2021
*/

//Declare variables for dimensions of the candy bar
int s, h1;

//Declare variables for the dimensions of the box
int b, h2;

//Get the dimensions of the candy bar
printf("Enter the width of the equilateral triangular base of the candy bar: ");
scanf("%d", &s);

printf("Enter the height of the candy bar: ");
scanf("%d", &h1);

//Calculate volume of each candy bar
float v1 = (sqrt(3.0) * pow(s, 2.0) * h1) / 4.0;

//Get the dimensions of the packaging box
printf("Enter the width of the hexagonal base of the box: ");
scanf("%d", &b);

printf("Enter the height of the box: ");
scanf("%d", &h2);

//Calculate the volume of the box
float v2 = (3.0 * sqrt(3.0) * pow(b, 2.0) * h2) / 2.0;

//Calculate the number of candy bars that fit in a box
int n = v2 / v1;

//Printing the result
printf("The number of candy bars that fit in a box is %d.\n", n);


return 0;
}
