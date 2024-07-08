#include "main.h"
#include <stdio.h>
/**
 *_strchr - locates a character in a string
 *@s: a pointer to teh string where the search will be performed
 *@c: the character to search for in the string
 *
 *Description: _strchr locates a character, c, in a string, s
 *Return: A pointer to the first occurence of the character c in a string s
 */
char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
		{
			return (s);
		}
		s++;
	}
	if (c == '\0')
	{
		return (s);
	}
	return (NULL);
}
