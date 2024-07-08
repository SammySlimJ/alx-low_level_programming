#include "main.h"
#include <stdio.h>
/**
 *_memcpy - copies memory area
 *@dest: pointer to the destination memory where the copied data will be stored
 *@src: pointer to the source memory where data will be copied from
 *@n: an unsigned integer representing teh number of bytes to be copied
 *
 *Description: _memcpy copies memory area
 *Return: pointer to the destrintion memory location, dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
