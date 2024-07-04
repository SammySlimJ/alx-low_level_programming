#include "main.h"
#include <stdio.h>
/**
 *_strcat - concatenates two strings
 *@dest: the destination string
 *@src: the source string to be appended to the dest string
 *
 *Description: this function concatenates two strings
 *Return: the destination pointer
 */
char *_strcat(char *dest, char *src)
{
	while (*dest != '\0')
	{
		dest++;
	}
	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = '\0';
	return (dest);
}
