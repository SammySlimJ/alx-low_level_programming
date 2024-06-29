#include "main.h"
/**
 *more_numbers - prints 10 times the numbers, from 0 to 14,
 * followed by a new line
 *
 *Description: prints 10 times the numbers,
 * from 0 to 14, followed by a new line
 *Return: Always 0
 */
void more_numbers(void)
{
	int i;
	int s;

	for (s = 0; s < 10; s++)
	{
		for (i = 0; i <= 14; i++)
		{
			/*print the left most digit*/
			if (i > 9)
			{
				_putchar((i / 10) + '0');
			}
		/*print the right most digit*/
			_putchar((i % 10) + '0');
		}
		_putchar('\n');
	}
}
