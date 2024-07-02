#include "main.h"
#include <stdio.h>
/**
 *print_rev - prints a string, in reverse, followed by a new line
 *@s: the string to be printed in reverse
 *
 *Description: prints a string, in reverse, followed by a new line
 *Return: Nothing
 */
void print_rev(char *s)
{
	int len;

	len = 0;
	while (s[len] != '\0')
	{
		len++;
	}
	len = len - 1;
	while (len >= 0)
	{
		putchar(s[len]);
		len--;
	}
	putchar ('\n');
}
