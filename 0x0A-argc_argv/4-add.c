#include "main.h"
#include <stdlib.h>
#include <ctype.h>
#include <stdio.h>
/**
 *_add_positive_numbers - A function adds positive numbers
 *@argc: the argument that counts the number of command lines
 *@argv: the array of strings where each element points to a command line
 *
 *Description: This program adds positive numbers
 *Return: Always 0, otherwise 1
 */
int _add_positive_numbers(int argc, char **argv)
{
	int total;
	int i;
	int num;

	if (argc <= 1)
	{
		printf("0\n");
		return (0);
	}

	total = 0;
	for (i = 1; i < argc; i++)
	{
		char *num_str = argv[i];

		while (*num_str)
		{
			if (!isdigit(*num_str))
			{
				printf("Error\n");
				return (1);
			}
			num_str++;
		}
		num = atoi(argv[i]);
		if (num <= 0)
		{
			printf("Error\n");
			return (1);
		}
		total += num;
	}
	printf("%d\n", total);
	return (0);
}
int main(int argc, char *argv[])
{
	return (_add_positive_numbers(argc, argv));
}
