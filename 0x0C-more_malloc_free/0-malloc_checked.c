#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 *malloc_checked - allocates memory using malloc
 *@b: the size of the memory block to be allocated
 *
 *Description: allocates memory using malloc
 *Return: Nothing
 */
void *malloc_checked(unsigned int b)
{
	void *ptr;

	ptr = malloc(b);
	if (ptr == NULL)
	{
		exit(98);
	}
	return (ptr);
}
