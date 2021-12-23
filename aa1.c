#include <stdio.h>
#include <time.h>
#include <stdlib.h>
int main() {
int num1;
printf("Enter a three digit number: ");
scanf("%d", num1);

if (num1 >= 100) {
	if ((num1 % 8) ==0) {
		printf("The number %d is divisible by 8", num1);
	} else {
		printf("The number %d is not divisible by 8", num1);
	}
} 
else 
{
printf("Number entered %d is not a 3 digit number", num1);
}

return 0;
}
