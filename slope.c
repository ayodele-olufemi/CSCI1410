#include <stdio.h>

int main() {

/*
Program:	A C program to calculate the slope of a line
		given two points (x1, y1) and (x2, y2) on it.
Author:		Ayodele Olufemi
Date: 		10/10/2021
*/

//Declare variables for the two points
float x1, y1, x2, y2, slope;


//Get the coordinate of the points
printf("Enter point 1's x-coordinate i.e. x1: ");
scanf("%f", &x1);

printf("Enter point 1's y-coordinate i.e. y1: ");
scanf("%f", &y1);

printf("Enter point 2's x-coordinate i.e. x2: ");
scanf("%f", &x2);

printf("Enter point 2's y-coordinate i.e. y2: ");
scanf("%f", &y2);


//Calculate slope
if ((x2 - x1) != 0.0) {
slope = (y2 - y1) / (x2 - x1);

//Printing the result
printf("The slope of the line from (%.2f, %.2f) to (%.2f, %.2f) is %.2f\n.", x1, y1, x2, y2, slope);
}
else {
printf("Slope cannot be calculated. Line is vertical.");
}


return 0;
}
