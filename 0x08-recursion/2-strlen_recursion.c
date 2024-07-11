#include "main.h"
#include <stdio.h>
/**
 * _strlen_recursion - returns the length of a string
 *@s: pointer to a character on the string
 *
 *Description: thsi function returns the length of a string
 *Return: an integer
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}
	return (1 + _strlen_recursion(s + 1));
}
