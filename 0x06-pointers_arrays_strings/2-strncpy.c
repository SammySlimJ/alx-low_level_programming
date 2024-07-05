#include "main.h"
#include <stdio.h>
/**
 *_strncpy - copies a string
 *@dest: the destination array where src content will copied
 *@src: the source string whose content will be copied to the destination array
 *@n: the integer specifying specifying the maximum number of characters
 *to be copied from src
 *
 *Description: this function copies up to n characters from the string pointed
 *to by src, to the buffer pointed to by dest.
 *Return: the original dest pointer
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	for (; i < n; i++)
	{
		dest[i] = '\0';
	}
	return (dest);
}
