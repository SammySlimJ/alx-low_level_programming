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

	s = (n % 10);
	if (s < 0)
	{
		s = (s * -1);
	}
	_putchar(s + '0');
	return (s);
}
