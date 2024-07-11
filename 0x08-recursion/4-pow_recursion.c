#include "main.h"
#include <stdio.h>
/**
 *_pow_recursion - retuns the value of x raised to the power of y
 *@x: the integer value taen in as an argument by the function
 *@y: the integer value to which x is raised
 *
 *Description: this function returns the value of x raised to the power of y
 *Return: an integer
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	if (y == 0)
	{
		return (1);
	}
	return (x * _pow_recursion(x, y - 1));
}
