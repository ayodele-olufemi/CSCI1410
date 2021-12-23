/*	Program: Dice
	Author: Ayodele Olufemi
	Date: 12/02/2021
	Purpose: Dice program to pay pig dice game
*/

#include<stdio.h>
#include<stdlib.h>
#include <time.h>

//Declare the functions
void display_rules();
int play_game();
int hold_turn(int a, int b);
int roll_die();
int largest(int arr[], int n);
int indexOfValue(int arr[], int n, int v);
void showFinalScores(int arr[], int n);


int main() {
	display_rules();
	printf("\nPlayer %d wins!!!", play_game() + 1);
	return 0;
}
//Create function to display the game rules
void display_rules() {
	printf("----------------------------------Welcome. Let's Play!!!-----------------------------------\n");
	printf("-------------------------------------First, the rules: ------------------------------------\n");
	printf("1.\tEach player takes turns. When its your turn, you can issue any of the\n");
    printf("\tfollowing commands:\n");
 	printf("\t\t0: \tdisplays the rules. \n\t\t1: \trolls the die.\n");
	printf("\t\t2: \tadds current scores to your total score and passes the turn \n");
    printf("\t\t\tto the next player.\n");
	printf("2.\tDuring your turn: \n\t\t- if you roll a number other than 1, your rolls gets added to your score.\n");
	printf("\t\t- if you roll a 1, you get zero for that turn and the next player takes turn.\n");
	printf("3.\tFirst player to get to target wins the game.\n");
	printf("\n-------------------------------Now you know the rules-------------------------------\n");
}

// Create function to roll the die
int roll_die() {
	srand(time(0));
	int number = rand() % 6 + 1;
	return number;
}

// Create function to hold turn
// Signals the next players's turn
int hold_turn(int a, int b) {
    int c = (a + 1) % b;
	return c;
}

// Function to get largest score
int largest(int* arr, int n) {
	int i;
	int max = arr[0];
	
	for (i = 1; i < n; i++) {
		if (arr[i] > max) {
			max = arr[i];
		}
	}
	return max;
}

// Function to return the index of largest score
int indexOfValue(int* arr, int n, int v) {
	int i = 0;
	for (i = 0; i < n; i++) {
		if (arr[i] == v) {
			return i;
		}
	}
}

// Function to print final scores
void showFinalScores(int* arr, int n) {
	int i = 0;
	printf("--------------Final Scores--------------\n");
	for (i = 0; i < n; i++) {
		printf("Player %d: %d\n", i+1, arr[i]);
		}
	}

// Function to play game
int play_game() {
	// Get number of players playing the game
	int numberOfPlayers;
	printf("Enter the number of players: ");
	scanf("%d", &numberOfPlayers);

	// Get the target winning points
	int target;
	printf("Enter the target winning points: ");
	scanf("%d", &target);
	
	// Index of winner when game is over.
	int winner = -1;
	
	// Loop counter
	int i = 0;

	// Creating and initializing scores and players array
	int *scores = malloc(numberOfPlayers * sizeof(int));
	int *players = malloc(numberOfPlayers * sizeof(int));
	
	for (i = 0; i < numberOfPlayers; i++) {
		scores[i] = 0;
		players[i] = i;
	}

	int currentPlayer = players[0];
	int userCommand;
    int turnScore = 0;
	
    // Continue play if no winner yet
	while(winner == -1) {
		printf("---------------Player %d---------------\n", currentPlayer + 1);
		while (largest(scores, numberOfPlayers) < target) {
			printf("Awaiting command...");
			scanf("%d", &userCommand);
			
			if (userCommand == 1){
				int a = roll_die();
                printf("Dice roll: %d\n", a);
				if (a != 1) {
					turnScore += a;
                    printf("This turn score: %d points\n", turnScore);
                    printf("Your total score: %d points\n", scores[currentPlayer]);
				}
				else {
                    printf("Your score: %d points\n", scores[currentPlayer]);
					currentPlayer = hold_turn(currentPlayer, numberOfPlayers);
					break;
				}
			} else if (userCommand == 2) {
                scores[currentPlayer] += turnScore;
                printf("This turn score: %d points\n", turnScore);
                printf("Your total score: %d points\n", scores[currentPlayer]);
                turnScore = 0;
				currentPlayer = hold_turn(currentPlayer, numberOfPlayers);
                printf("You're on hold. Player %d plays now.\n", currentPlayer + 1);
				break;
			} else {
				display_rules();
			}
		}
		if (largest(scores, numberOfPlayers) >= target){
			winner = 1;
		}
	}
	showFinalScores(scores, numberOfPlayers);
	
	winner = indexOfValue(scores, numberOfPlayers, largest(scores, numberOfPlayers));

	return winner;
}
	
	



