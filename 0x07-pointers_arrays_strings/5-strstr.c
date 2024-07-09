#include "main.h"
#include <stdio.h>
/**
 *_strstr - locates a substring
 *@haystack: the larger string
 *@needle: the substring to search for
 *
 *Description: this function locates a substring in a bigger string
 *Return: a pointer to the location of the found substring or NULL if not found
 */
char *_strstr(char *haystack, char *needle)
{
	if (*needle == '\0')
	{
		return (haystack);
	}
	while (*haystack)
	{
		char *h = haystack;
		char *n = needle;

		while (*h && *n && *h == *n)
		{
			h++;
			n++;
		}
		if (*n == '\0')
		{
			return (haystack);
		}
		haystack++;
	}
	return (NULL);
}
