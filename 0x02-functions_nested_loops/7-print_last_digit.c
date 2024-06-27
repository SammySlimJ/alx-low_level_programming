#include "main.h"
/**
*print_last_digit - prints the last digit of a number
*@n: is the last digit of a number
*
*Description: prints the last digit of a number.
*Return: value of the last digit
*/
int print_last_digit(int n)
{
	int s;

	if (n < 0)
	{
		n = (n * -1);
	}
	s = (n % 10);
	_putchar(s + '0');
	return (s);
}
