#include "main.h"
#include <stdio.h>
/**
 *factorial - returns the factorial of a given number
 *@n:is the integer parameter taken in as an argument by the factorial function
 *
 *Description: the function returns the factorial of a given number
 *Return: an integer
 */
int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	if (n == 0)
	{
		return (1);
	}
	return (n * factorial(n - 1));
}
