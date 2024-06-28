#include "main.h"
/**
*_isupper - checks for uppercase character
*@c: is the integer to check
*
*Description: checks for uppercase character.
*Return: 1 if c is uppercase, 0 otherwise
*/
int _isupper(int c)
{
	int letter;

	for (letter = 65; letter <= 90; letter++)
	{
		if (c == letter)
		{
			return (1);
		}
	}
	return (0);
}
