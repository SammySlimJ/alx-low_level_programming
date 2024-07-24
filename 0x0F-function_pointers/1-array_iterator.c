#include <stdio.h>
/**
 *array_iterator - Executes a function on each element of an array
 *@array: A pointer to the array of integers
 *@size: The number of elements in the array
 *@action: pointer to the function to be executed on
 *each element of the array
 *
 *Description: This function iterates over each element in the provided array
 * and applies the function pointed to by @action to each element
 *The @action function should take a single integer argument and return void
 *Return: Nothing. This function does not return a value.
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (array && action)
	{
		for (i = 0; i < size; i++)
		{
			action(array[i]);
		}
	}
}
