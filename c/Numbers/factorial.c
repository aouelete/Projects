/**
 * calculate the factorial of a positive integer
 *
 */
#include <stdio.h>
#include <stdlib.h>

long factorial(int number)
{
	if (number == 0)
		return 1;
	else if (number == 1)
		return 1;
	else
		return factorial(number - 1) * number;
}

int main(int argc, char **argv)
{
	if (argc != 2)
	{
		printf("Usage: factorial int\n");
		return 1;
	}

	int number = atoi(argv[1]);
	printf("%li\n", factorial(number));
}
