#include "main.h"
#include <stdio.h>
/**
 *_strncat - concatenates two strings except uses most n bytes from src
 *src does not need to be null-terminated if it contains n or more bytes
 *@dest: the destination string
 *@src: the source string to be appended to the destination string
 *@n: the number of bytes from the src string
 *
 *Description: this function concatenates two strings useing the most n bytes
 * from src without src being null terminated if it contains n or more bytes
 *Return: Pointer to the concatenated destinaion string
 */
char *_strncat(char *dest, char *src, int n)
{
	char *ptr = dest;

	while (*ptr != '\0')
	{
		ptr++;
	}
	while (*src != '\0' && n > 0)
	{
		ptr = src;
		n--;
	}
	ptr = '\0';
	return (dest);
}
