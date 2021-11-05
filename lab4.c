#include <stdio.h>

int main()
{
int Num1, Num2, Sum, Difference, Product, Remainder, Quotient2;
float Quotient;
printf("Enter value for Num1: ");
scanf("%d", &Num1);

printf("Enter value for Num2: ");
scanf("%d", &Num2);

Sum = Num1 + Num2;
Difference =  Num1 -  Num2;
Product = Num1 * Num2;
Remainder = Num1 % Num2;
Quotient = Num1 / (float)Num2;
// Quotient2 = Num1  Num2;

printf("Sum: %d\nDifference: %d\nProduct: %d\nRemainder: %d\nQuotient: %f\n", Sum, Difference, Product, Remainder, Quotient);

return 0;
}
