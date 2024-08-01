#include <stdio.h>
#include "lists.h"
/**
 *list_len - returns the number of elements in a linked list
 *@h: pointer to the list_t list
 *
 *Description: function counts the number of nodes in a list
 * and returns that number
 *Return: number of nodes in the list
 */
size_t list_len(const list_t *h)
{
	size_t count;

	count = 0;
	while (h)
	{
		count++;
		h = h->next;
	}
	return (count);
}
