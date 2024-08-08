#include <stdio.h>
#include <stddef.h>
/**
 *binary_to_uint - converts a binary number as a string to an unsigned integer
 *@b: A pointer to a string of characters containing 0 and 1
 *
 *Description: Function converts a binary string of 0 and 1 characters into
 *its corresponding unsigned integer value
 *Return: Unsigned integer representation of binary number if string is valid,
 * 0 if the string is NULL or contains invalid characters
 */
unsigned int binary_to_uint(const char *b)
{
	int result;

	result = 0;
	if (b == NULL)
	{
		return (0);
	}
	while (*b)
	{
		if (*b != '0' && *b != '1')
		{
			return (0);
		}
		result = (result << 1) | (*b - '0');
		b++;
	}
	return (result);
}
