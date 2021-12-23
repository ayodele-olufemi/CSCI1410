#include<stdio.h>
#include<stdlib.h>

int main() {
	int numberOfPlayers;
	printf("Enter the number of players:" );
	scanf("%d", &numberOfPlayers);
	
	int i = 0;
	// Creating and initializing scores array
	int *scores = malloc(numberOfPlayers * sizeof(int));
	
	for (i = 0; i < numberOfPlayers; i++) {
		scores[i] = 0;
	}

	for (i = 0; i < numberOfPlayers; i++) {
		printf("%d", scores[i]);
	}

	char userCommand[1];
	printf("Enter your name: ");
	scanf("%s", userCommand);
	printf("My name is %s.", userCommand);
	
	return 0;
}
