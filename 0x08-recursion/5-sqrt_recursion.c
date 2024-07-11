#include "main.h"
#include <stdio.h>
/**
 *_sqrt_recursion - returns the natural square root of a number
 *@n: the integer to be taken in as an argument by the function
 *
 *Description: this function returns the natural square root of a number
 *Return: an integer
 */
int _sqrt_recursion(int n)
{
	int guess;

	guess = 1;
	if (guess * guess > n)
	{
		return (-1);
	}
	if (guess * guess == n)
	{
		return (guess);
	}
	return (guess + 1);
	if (n < 0)
	{
		return (-1);
	}
	return (n);
}
