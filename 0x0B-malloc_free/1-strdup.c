#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 *_strdup - duplicates a string using malloc
 *@str: the string to duplicate
 *
 *Description: Returns a pointer to a newly allocated space in memory,
 *which contains a copy of the string given as the argument
 *Return: Pointer to newly allocated space containing duplicate string
 * and NULL if str is NULL or malloc fails
 */
char *_strdup(char *str)
{
	char *duplicate;
	unsigned int length;
	unsigned int i;

	length = 0;
	if (str == NULL)
	{
		return (NULL);
	}
	while (str[length] != '\0')
	{
		length++;
	}
		duplicate = (char *)malloc((length + 1) * sizeof(char));
		if (duplicate == NULL)
		{
			return (NULL);
		}
		for (i = 0; i < length; i++)
		{
			duplicate[i] = str[i];
		}
		duplicate[length] = '\0';
		return (duplicate);
}
