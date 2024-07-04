#include "main.h"
#include <stdio.h>
/**
 *print_array - prints n elements of an array of integers,
 *followed by a new line
 *@a: the array to be printed
 *@n: the inter to be printed in the array
 *
 *Description:this function prints n elements of an array of integers,
 * followed by a new line
 *Return: Nothing
 */
void print_array(int *a, int n)
{
	int i;

	i = 0;
	for (i = 0; i < n; i++)
	{
		printf("%d", a[i]);
		if (i < n - 1)
		{
			printf(", ");
		}
		printf("\n");
	}
}
