#include  <stdio.h>

int main() {
//Declaring the number variable

int num1;
printf("Enter a number: ");
scanf("%d", &num1);

//Determining whether number is even or odd
if (num1 % 2 == 0) {
	printf("%d is an even number.\n", num1);
} else {
	printf("%d is an odd number.\n", num1);
}

return 0;
}
