#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 *create_array - creates an array of characters and initializes
 * it with a specific char
 *@size: the size of the array
 *@c: the character to initialize the array with
 *
 *Description: this function creates an array of characters
 * and initializes it with a specific char
 *Return: A pointer to the array, or NULL if it fails or if size is 0
 */
char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *array;

	if (size == 0)
	{
		return (NULL);
	}
	array = (char *)malloc(size * sizeof(char));
	{
		if (array == NULL)
		{
			return (NULL);
		}
		for (i = 0; i < size; i++)
		{
			array[i] = c;
		}
		return (array);
	}
}
