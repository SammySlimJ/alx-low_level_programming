#include "main.h"
/**
 *swap_int - swaps the values of two integers
 *@a: Pointer to the integer to be swapped
 *@b: Pointer to the integer to be swapped
 *
 *Description: this function swaps the values of two integers
 *Return: Nothing
 */
void swap_int(int *a, int *b)
{
	int tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}
