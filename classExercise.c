# include <stdio.h>

int main()
	{
int item1;
int item2;
int item3;
int isMember;


printf("Are you a Member? Enter 1 for Yes or 0 for No: ");
scanf("%d", &isMember);

printf("How many of item 1 are you buying?");
scanf("%d", &item1);

printf("How mnay of item 2 are you buying?");
scanf("%d", &item2);

printf("How many of item 3 are you buying?");
scanf("%d", &item3);

float total = (5.0 * item1) + (7.5 * item2) + (10.0 * item3);

if (isMember == 1) {
	total = 0.975 * total;
}

printf("The total is $%.2f", total);

return 0;

}
