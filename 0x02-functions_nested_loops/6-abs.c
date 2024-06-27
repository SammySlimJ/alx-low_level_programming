#include "main.h"
/**
*_abs - integer that computes the absolute value of an integer
*@n: is the number whose absolute value is being calculated
*
*Description: computes the absolute value of an integer
*Return: Absolute value
*/
int _abs(int n)
{
	if (n < 0)
	{
		return (n * -1);
	}
	else if (n == 0)
	{
		return (0);
	}
	else
	{
		return (n * 1);
	}
}
