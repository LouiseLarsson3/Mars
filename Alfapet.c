#include <stdio.h>
#include <stdlib.h>

int alfapet(char* word)
{
	int points = 0;
	// stores the point value of each letter
	int letter_values[] = {1, 3, 3, 2, 1, 4, 2, 4, 1, 8, 5, 1, 3, 1, 1, 3, 10, 1, 1, 1, 1, 4, 4, 8, 4, 10};

	for (int i = 0; word[i] != '\0'; i++)
	{
		// the index of the current letter in letter_values array is calculated as follows
		int letter_index = word[i] - 'a';
		points += letter_values[letter_index];
	}

	return points;
}

int main() {

	char word[30];

	printf("Enter a word: ");
	fflush (stdout);
	scanf("%s", word);

	int points = alfapet(word);
	printf("Your points: %d", points);

	return 0;
}
