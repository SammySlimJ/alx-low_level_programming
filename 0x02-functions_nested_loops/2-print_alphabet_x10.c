#include "main.h"
/**
 * print_alphabet - print the alphabet in lowercase 10 times
 *
 * Description: print the alphabet in lowercase 10 times
 * Return: nothing
 */
void print_alphabet_x10(void)
{
	char letter;
	int row;

	for (row = 1; row <= 10; row++)
	{
		for (letter = 'a'; letter <= 'z'; letter++)
		{
			_putchar(letter);
		}
		_putchar('\n');
	}
}
