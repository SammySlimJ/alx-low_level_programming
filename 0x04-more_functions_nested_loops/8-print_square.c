#include "main.h"
/**
 *print_square - prints a square, followed by a new line
 *@size: size to be checked
 *
 *Description: prints a square, followed by a new line
 */
void print_square(int size)
{
	int width;
	int height;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (height = 1; height <= size; height++)
		{
			for (width = 1; width <= size; width++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
}
