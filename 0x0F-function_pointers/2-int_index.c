#include <stdio.h>
#include <stddef.h>
/**
 *int_index - Searches for an integer in an array using a comparison function
 *@array: A pointer to the array of integers
 *@size: The number of elements in the array
 *@cmp: A pointer to the comparison function
 *
 *Description: Returns the index of the first element in the array for which
 * the comparison function does not return 0. Returns -1 if no element matches
 * or if @size is <= 0.
 *Return: Index of the first matching element or -1 if no match or invalid size
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array == NULL || cmp == NULL || size <= 0)
	{
		return (-1);
	}
	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]) != 0)
		{
			return (i);
		}
	}
	return (i);
}
