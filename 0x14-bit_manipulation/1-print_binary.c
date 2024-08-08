#include <stdio.h>
/**
 *print_binary - prints the binary representation of an unsigned long int
 *@n: the number to be printed in binary
 *
 *Description: function prints the binary representation of an unisgned int
 *it prints the most significant to least significant binary digit
 *Return: Nothing
 */
void print_binary(unsigned long int n)
{
	int leading_zero;
	unsigned long int mask;

	leading_zero = 1;
	mask = 1UL << (sizeof(unsigned long int) * 8 - 1);
	while (mask > 0)
	{
		if ((n & mask) == 0 && leading_zero)
		{
			mask >>= 1;
			continue;
		}
		putchar((n & mask) ? '1' : '0');
		leading_zero = 0;
		mask >>= 1;
	}
}
