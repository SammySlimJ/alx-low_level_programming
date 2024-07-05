#include "main.h"
#include <stdio.h>
/**
 *_strlen - returns the length of a string
 *@s: the string whose length to find
 *
 *Description: strlen returns the length of a string
 *Return: The length of the string
 */
int _strlen(char *s)
{
	int len;

	for (len = 0; s[len] != '\0'; len++)
	{
		;
	}
	return (len);
}

/**
 *_strcmp - compares two strings
 *@s1: string to be compared to s2
 *@s2: string to be compared to s1
 *
 *Description: this function compares two strings
 *Return: integer
 */
int _strcmp(char *s1, char *s2)
{
	while (*s1 != '\0' && *s2 != '\0')
	{
		if (*s1 != *s2)
		{
			return (*s1 - *s2);
		}
		s1++;
		s2++;
	}
	/* length checking from edge cases*/
	if (_strlen(s1) < _strlen(s2))
	{
		return (-1);
	}
	if (_strlen(s1) > _strlen(s2))
	{
		return (1);
	}
	return (0);
}
