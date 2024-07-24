#include <stdio.h>
#include "function_pointers.h"
#include <ctype.h>
/**
 *print_name - prints a name using a specified function pointer
 *@name: name of the person
 *@f: a pointer to a function that takes a char 8 and returns a void
 *print_uppercase: prints the name in uppercase
 *
 *Description: This function takes a name and a function pointer as arguments
 *It then calls the provided function with the given name
 *Return: Nothing
 */
void print_uppercase(char *name)
{
	int i;

	for (i = 0; name[i]; i++)
	{
		putchar(toupper(name[i]));
	}
	putchar('\n');
}
void print_name(char *name, void (*f)(char *))
{
	if (name && f)
	{
		f(name);
	}
}
