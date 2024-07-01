#include "main.h"
/**
 *_strlen - returns the length of a string
 *@s: the string whose length to find
 *
 *Description: strlen returns the length of a string
 *Return: The length of the string
 */
int _strlen(char *s)
{
	int len;

	for (len = 0; s[len] != '\0'; len++)
	{
		;
	}
	return (len);
}
