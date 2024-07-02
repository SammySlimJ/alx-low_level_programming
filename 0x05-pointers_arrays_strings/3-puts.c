#include "main.h"
#include <stdio.h>
/**
 *_puts - prints a string, followed by a new line, to stdout
 *@str: is the string to be printed
 *
 *Description: prints a string, followed by a new line, to stdout
 *Return: Nothing
 */
void _puts(char *str)
{
	int i = 0;

	while (str[1] != '\0')
	{
		putchar (str[i]);
		i++;
	}
	putchar ('\n');
}
