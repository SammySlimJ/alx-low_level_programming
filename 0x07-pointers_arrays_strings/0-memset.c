#include "main.h"
#include <stdio.h>
/**
 *_memset - fills memory with a constant byte
 *@s: pointer to a character array
 *@b: character value to be used to fill the memory
 *@n: This is the number of bytes of memory to be filled
 *
 *Description: The function iterates through the memory
 * pointed to by s for n bytes
 *Return: pointer to memory area s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}
