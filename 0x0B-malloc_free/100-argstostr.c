#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 *argstostr - concatenates all the arguments of your program
 *@ac: Number of command-line arguments
 *@av: an array of character pointers that stores the arguments entered by
 * the user when they execute a program
 *
 *Description: This function counts the number of
 * arguments passed into a program
 *Return: A pointer to a character
 */
char *argstostr(int ac, char **av)
{
	int total_length;
	int i;
	char *result;
	char *ptr;

	if (ac == 0 || av == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < ac; i++)
	{
		total_length += strlen(av[i] + 1);
	}
	result = malloc(total_length + 1);
	if (result == NULL)
	{
		return (NULL);
	}
	ptr = result;
	for (i = 0; i < ac; i++)
	{
		strcpy(ptr, av[i]);
		ptr += strlen(av[i]);
		*ptr = '\n';
		ptr++;
	}
	*ptr = '\0';
	return (result);
}
