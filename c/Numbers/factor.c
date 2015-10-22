/**
 * find all the prime factors of a number
 *
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(int argc, char **argv)
{
	if (argc != 2)
	{
		printf("Usage: factor INT\n");
		return 1;
	}

	long input = atol(argv[1]);
	if (input < 2)
	{
		printf("Error: input must be an integer greater than 1\n");
		return 1;
	}
	long number = input;

	printf("%li:", number);
	while (number % 2 == 0)
	{
		number = number / 2;
		printf(" 2");
	}
	long max = (long) round(sqrt(number));
	for (long try = 3; try < max + 1; try += 2)
	{
		while (number % try == 0)
		{
			number = number / try;
			printf(" %li", try);
		}
	}
	if (number > 1)
		printf(" %li", number);
	printf("\n");

	return 0;
}
