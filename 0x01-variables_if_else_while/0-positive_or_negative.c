#include <stdlib.h>
#include <time.h>
/**
 * main - main block
 * Program to get random numbers
 * and seperate into positives, negatives or zeroes
 * Return: 0
 */
int main(void)
{	int n;
	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
		printf("%i is positive\n");
	else if (n < 0)
		printf("%i is negative\n");
	else
		printf("%i is zero\n");
	return (0);
}

					return (
