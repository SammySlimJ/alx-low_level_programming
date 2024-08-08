#include <stdio.h>

/**
 * get_bit - Returns the value of a bit at a given index.
 * @n: The number to extract the bit from.
 * @index: The index of the bit to get, starting from 0.
 *
 * Return: The value of the bit at index, or -1 if an error occurred.
 *         Returns -1 if index is out of range.
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int num_bits = sizeof(unsigned long int) * 8;

	if (index >= num_bits)
	{
		return (-1);
	}

	return ((n >> index) & 1);
}
