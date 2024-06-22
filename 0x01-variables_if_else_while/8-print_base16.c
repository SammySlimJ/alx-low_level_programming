#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i;
	int letter;

	for (i = 0; i <= 9; i++)
	{
		putchar (i + '0');
	}
	for (letter = 'a'; letter <= 'f'; letter++)
	{
		putchar (letter);
	}
	putchar ('\n');
	return (0);
}
