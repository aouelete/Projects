/**
 * count the number of vowels in a word
 *
 */
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>

int main(int argc, char *argv[])
{
	if (argc != 2)
	{
		printf("Usage: vowels \"word\"\n");
		return 1;
	}

	int count_a = 0;
	int count_e = 0;
	int count_i = 0;
	int count_o = 0;
	int count_u = 0;

	char *word = malloc(sizeof(argv[1]));
	strcpy(word, argv[1]);
	int length = strlen(word);
	for (int i = 0; i < length; i++)
		word[i] = tolower(word[i]);

	for (int i = 0; i < length; i++)
	{
		char letter = word[i];
		if (letter == 'a')
			count_a++;
		else if (letter == 'e')
			count_e++;
		else if (letter == 'i')
			count_i++;
		else if (letter == 'o')
			count_o++;
		else if (letter == 'u')
			count_u++;
	}

	printf("Total vowels: %i\n", count_a + count_e + count_i + count_o + count_u);
	printf(" a: %i\n", count_a);
	printf(" e: %i\n", count_e);
	printf(" i: %i\n", count_i);
	printf(" o: %i\n", count_o);
	printf(" u: %i\n", count_u);

	free(word);
	return 0;
}
