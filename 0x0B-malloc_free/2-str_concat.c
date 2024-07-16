#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 *str_concat - concatenates 2 strings
 *@s1: first string
 *@s2: second string
 *
 *Description: This function concatenates 2 strings
 *Return: A pointer to new allocated space in memory containing s1
 *followed by s2, and null terminated. Returns NULL on failure
 */
char *str_concat(char *s1, char *s2)
{
	char *concat;
	unsigned int len1;
	unsigned int len2;
	unsigned int i;
	unsigned int j;

	len1 = 0;
	len2 = 0;
	if (s1 == NULL)
	{
		s1 = ("");
	}
	if (s2 == NULL)
	{
		s2 = ("");
	}
	while (s1[len1] != '\0')
	{
		len1++;
	}
	while (s2[len2] != '\0')
	{
		len2++;
	}
	concat = (char *)malloc((len1 + len2 + 1) * sizeof(char));
	if (concat == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < len1; i++)
	{
		concat[i] = s1[i];
	}
	for (j = 0; j < len2; j++)
	{
		concat[len1 + j] = s2[j];
	}
	concat[len1 + len2] = '\0';
	return (concat);
}
