#include "main.h"
#include <stdio.h>
/**
 *_print_rev_recursion - prints a string in reverse
 *@s: pointer to a character
 *
 *Description: this function prints a string in reverse
 *Return: Nothing
 */
void _print_rev_recursion(char *s)
{
	if (*s == '\0')
	{
		return;
	}
	_print_rev_recursion(s + 1);
	putchar(*s);
}
