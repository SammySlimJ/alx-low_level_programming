#include "main.h"
#include <stdio.h>
/**
 *_strpbrk - searches a string for any of a set of bytes
 *@s: A pointer to the string s where we want to search for characters
 *@accept: a pointer to the string 'accept' that contains
 *the characters to be searched for in s
 *
 *Description: _strpbrk searches for the string, s, for any of a set of bytes
 *Return: a pointer to the first occurrence of any character
 *from accept found in s. If no such character is found, it returns NULL.
 */
char *_strpbrk(char *s, char *accept)
{
	while (*s)
	{
		char *a = accept;

		while (*a)
		{
			if (*s == *a)
			{
				return (s);
			}
			a++;
		}
		s++;
	}
	return (NULL);
}
