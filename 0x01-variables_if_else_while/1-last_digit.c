#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
	int n;
	int lastdigit;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	lastdigit = n % 10;
	printf("Last digit of %d is %d and ", n, lastdigit);
	if (lastdigit > 5)
	{
		printf("is greater than 5\n");
	}
	else if (lastdigit == 0)
	{
		printf("is 0\n");
	}
	else if (lastdigit < 6 && lastdigit != 0)
	{
		printf("is less than 6 and not 0\n");
	}
	return (0);
}
