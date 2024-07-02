#include "main.h"
/**
 *rev_string - reverses a string
 *@s: is the string to be reversed
 *
 *Description: function reverses a string
 *Return: Nothing
 */
void rev_string(char *s)
{
	int start;
	int end;
	int temp;
	int len;

	start = 0; /*the first index, index 0 of the string*/
	len = _strlen(s); /*the length of the string*/
	end = len - 1; /* the index before the nul terminator*/

	while (start < end)
	{
		/*swap letters for 'start' and 'end' indices*/
		temp = s[start];
		s[start] = s[end];
		s[end] = temp;
		/* move 'start' to the right*/
		start++;
		/* move 'end' to the left*/
		end--;
	}
}

/**
 *_strlen - returns the length of a string
 *@s: the string whose length to find
 *
 *Description: strlen returns the length of a string
 *Return: The length of the string
 */
int _strlen(char *s)
{
	int len;

	for (len = 0; s[len] != '\0'; len++)
	{
		;
	}
	return (len);
}
