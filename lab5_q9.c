#include <string.h>
#include <stdio.h>

int main() {

//Declare and request for user's age
int age;
printf("Enter your age: ");
scanf("%d", &age);

//Declare the category variable 
char category[15];

//Checking for age category 
if (age < 3){
	strcpy(category, "infante");
} else if (age < 12) {
	strcpy(category, "child");
} else if (age < 18) {
	strcpy(category, "teenager");
} else if (age < 70) {
	strcpy(category, "adult");
} else {
	strcpy(category, "senior");
}

//Printing the result
printf("Your age is %d. You are a/an %s.\n", age, category);

return 0;
}
