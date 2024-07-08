#include "main.h"
#include <stdio.h>
/**
 *_strspn - gets the length of a prefix substring
 *@s: pointer to the string to be scanned
 *@accept: a pointer to the string containing the list of characters
 *to match in s
 *
 *Description: _strspn gets the length of a prefix substring
 *Return: The number of characters in the initial segment of s
 *which consist only of characters from accept
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int count = 0;
	int found = 0;
	char *a;

	while (*s)
	{
		found = 0;
		for (a = accept; a; a++)
		{
			if (*s == *a)
			{
				found = 1;
				break;
			}
		}
		if (!found)
		{
			break;
		}
		count++;
		s++;
	}
	return (count);
}
