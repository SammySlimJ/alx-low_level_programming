#include <unistd.h>
int _putchar(char c);
void _puts(char *s);
int _strlen(char *s);
int _isdigit(int c);
int _isalpha(int c);
int _islower(int c);
int _isupper(int c);
int _abs(int n);
int _atoi(char *s);
char *_strcpy(char *dest, char *src);

int _isdigit(int c)
{
	return (c >= '0' && c <= '9');
}

int _strlen(char *s)
{
	int length = 0;
	while (s[length] != '\0')
	{
		length++;
	}
	return length;
}

void _puts(char *s)
{
	while (*s)
	{
		_putchar(*s++);
	}
}

char *_strcpy(char *dest, char *src)
{
	char *start = dest;
	while ((*dest++ = *src++));
	return (start);
}

int _atoi(char *s)
{
	int num = 0, sign = 1;
	while (*s == ' ') s++;
	if (*s == '-' || *s == '+')
	{
		sign = (*s == '-') ? -1 : 1;
		s++;
	}
	while (*s >= '0' && *s <= '9')
	{
		num = num * 10 + (*s - '0');
		s++;
	}
	return (sign * num);
}
