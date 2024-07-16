#include "main.h"
#include <stdio.h>
/**
 *@argc: the argument that counts the number of command lines
 *@argv: array of strings where each element points to a command line argument
 *
 *Description: this argument prinst the number of arguments passed into it
 *Return: Always zero
 */
int main(int argc, char **argv __attribute__((unused)))
{
	printf("%d\n", argc - 1);
	return(0);
}
