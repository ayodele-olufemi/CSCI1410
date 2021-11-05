#include <string.h>
#include <stdio.h>

int main() {

//Request for user's age
int age;
printf("Enter your age: ");
scanf("%d", &age);

//Declare the category variable 
char category[15];

//Checking for user's age category 
if (age <= 1){
	strcpy(category, "infant");
} else if (age < 13) {
	strcpy(category, "child");
} else if (age < 20) {
	strcpy(category, "teenager");
} else if (age >= 20) {
	strcpy(category, "adult");
}

//Printing the result
printf("Your age is %d. You are a/an %s.\n", age, category);

return 0;
}

