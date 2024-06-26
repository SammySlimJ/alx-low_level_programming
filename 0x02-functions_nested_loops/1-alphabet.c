#include "main.h"
/**
 * print_alphabet - print the alphabet in lowercase
 *
 * Description: print the alphabet in lowercase
 * Return: nothing
 */
void print_alphabet(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
	{
		_putchar(letter);
	}
	_putchar('\n');
}
