#include "main.h"
#include <stdio.h>
#include <string.h>
/**
 *puts_half - prints half of a string, followed by a new line
 *@str: is the string whose half will be printed
 *
 *Description: this function prints half of a string, followed by a new line
 *Return: Nothing
 */
void puts_half(char *str)
{
	int length;
	int start;
	int i;

	length = strlen(str);
	if (length % 2 == 0)
	{
		start = length / 2;
	}
	else
	{
		start = (length + 1) / 2;
	}
	for (i = start; i < length; i++)
	{
		putchar (str[i]);
	}
	putchar ('\n');
}
