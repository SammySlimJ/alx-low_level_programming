#include <unistd.h>

char *_strcat(char *dest, char *src);
char *_strncat(char *dest, char *src, int n);
char *_strncpy(char *dest, char *src, int n);
int _strcmp(char *s1, char *s2);
char *_memset(char *s, char b, unsigned int n);

char *_strcat(char *dest, char *src)
{
	char *start = dest;
	while (*dest) dest++;
	while ((*dest++ = *src++));
	return (start);
}

char *_strncat(char *dest, char *src, int n)
{
	char *start = dest;
	while (*dest) dest++;
	while (n-- > 0 && (*dest++ = *src++));
	*dest = '\0';
	return (start);
}

char *_strncpy(char *dest, char *src, int n)
{
	char *start = dest;
	while (n-- > 0 && (*dest++ = *src++));
	return (start);
}

int _strcmp(char *s1, char *s2)
{
	while (*s1 && (*s1 == *s2))
	{
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}

char *_memset(char *s, char b, unsigned int n)
{
	char *start = s;
	while (n-- > 0)
	{
		*s++ = b;
	}
	return (start);
}
