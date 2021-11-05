#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/*
Program:	A number-guessing game where the user guesses a secret number.
Author:		Ayodele Olufemi
Date:		10/22/2021
*/

int main() {
	// Creating secretNumber variable and initializing it with a random integer between 1 and 100 inclusive
	// Use current time as seed for random generator so that a different number is generated on each run

	srand(time(0));
	int secretNumber = rand() % 100 + 1;

	// Declaring variables for user's guess and guess count (initialized as 0)
	int userGuess;
	int count = 0;

	// Using while loop to request user's guess until the correct guess is made
	while (1) { 
		// Ask the user to guess the secret number
		printf("Guess the secret number between 1 and 100: ");
		scanf("%d",&userGuess);

		// Increment count for each user guess
		count++;

		// Comparing userGuess and secretNumber
		if (userGuess < secretNumber) {
			printf("Wrong guess! Your guess is less than the secret number.\n");
		} 
		else if (userGuess > secretNumber) {
			printf("Wrong guess! Your guess is greater than the secret number.\n");
		}
		else { 
			// Here userGuess == secretNumber. Congratulate and break while loop
			printf("\n--------------------------------------------------------------\n \
Bingo! The secret number is %d.\n \
It took you %d steps to guess the number.\n\
--------------------------------------------------------------\n", secretNumber, count);
			break;
		}
	}

	return 0;
}
