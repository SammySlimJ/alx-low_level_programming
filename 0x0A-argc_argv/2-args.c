#include "main.h"
#include <stdio.h>
/**
 *main - a program taht prints all its arguments
 *@argc: The argument that counts the number of command lines
 *@argv: The argument that lists all arguments
 *
 *Description: This program prints all its arguments
 *Return: Always zero
 */
int main(int argc, char **argv)
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
