#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 *main - A program that multiplies 2 numbers
 *@argc: The argument that counts the number of command lines
 *@argv: The array of strings where each element points to a command line
 *
 *Description: This program multiplies 2 numbers
 *Return: Always 0, otherwise 1
 */
int main(int argc, char **argv)
{
	int num1;
	int num2;
	int result;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}

	num1 = atoi(argv[1]);
	num2 = atoi(argv[2]);
	result = num1 * num2;

	printf("%d\n", result);
	return (0);
}
