#include "main.h"
/**
* _isalpha - checks for alphabet characters
* @c: character to check
*
*Description: checks for alphabet character
*Return: (0)
*/
int _isalpha(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	else if (c >= 97 && c <= 122)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
