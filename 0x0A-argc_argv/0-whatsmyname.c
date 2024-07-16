#include "main.h"
#include <stdio.h>
/**
 * main - a program that prints its name, followed by a new line
 * @argc: the argument that counts the number of command lines
 * @argv: array of strings where each element points to a command-line argument
 * Description: This program prints its name followed by a new line
 * Return: Always zero
 */
int main(__attribute__((unused)) int argc, char *argv[])
{
  printf("%s\n", argv[0]);
  return (0);
}
