//complete this program by coding the missing part. 

#include <stdio.h>
//declare the function prototypes here
int sum(int num1, int num2);
int difference(int num1, int num2);
float quotient(int num1, int num2);
int product(int num1, int num2);
int min(int num1, int num2);
int max(int num1, int num2);
float average(int num1, int num2);

int main () {
	// local variable definition
	int num1, num2;

	// prompt the users to enter two integers
	printf("Enter the value of num1: ");
	scanf("%d", &num1);
	printf("Enter the value of num2: ");
	scanf("%d", &num2);

	// call sum, subtract, quotient, multiply, max, min, and average functions
	// Print, display the result
	printf("----Calls and output----\n");
	printf(" Sum: %d\n", sum(num1,num2));
	printf(" Difference: %d\n", difference(num1,num2));
	printf(" Quotient: %.2f\n", quotient(num1,num2));
	printf(" Product: %d\n", product(num1,num2));
	printf(" Minimum: %d\n", min(num1,num2));
	printf(" Maximum: %d\n", max(num1,num2));
	printf(" Average: %.2f\n", average(num1,num2));
 
	return 0;
}

/* function returning the sum of the two numbers */
int sum(int num1, int num2) {
	return num1 + num2;
}

/* function returning the difference of the two numbers */
int difference(int num1, int num2) {
	return num1 - num2;
}

/* function returning the quotient of the two numbers */
float quotient(int num1, int num2) {
	if (num2 != 0) {
		return (float)num1 / (float)num2;
	}
}

/* function returning the product of the two numbers */
int product(int num1, int num2) {
   return num1 * num2;
}

/* function returning the min between two numbers */
int min(int num1, int num2) {
  	if (num1 < num2) {
		return num1;
	} else {
		return num2;
	}
} 

/* function returning the max between two numbers */
int max(int num1, int num2) {
  	if (num1 > num2) {
		return num1;
	} else {
		return num2;
	}
}

/* function returning the average of the two numbers */
float average(int num1, int num2){
   return (num1 + num2) / 2.0;
} 
