#ifndef LISTS_H
#define LISTS_H

#include <stddef.h>

/**
 * struct list_s - singly linked list
 * add_node - adds a new node at the beginning of a list_t list
 * @str: string - (malloc'ed string)
 * @len: length of the string
 * @next: points to the next node
 *
 * Description: singly linked list node structure
 */
typedef struct list_s
{
	char *str;
	unsigned int len;
	struct list_s *next;
}
	list_t;

/* Function prototypes */
size_t print_list(const list_t *h);
int _putchar(char c);

/* Function prototype */
size_t list_len(const list_t *h);

#endif /* LISTS_H */
