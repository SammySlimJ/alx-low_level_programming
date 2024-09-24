#include <unistd.h>

char *_memcpy(char *dest, const char *src, unsigned int n);
char *_strchr(char *s, char c);
unsigned int _strspn(char *s, const char *accept);
char *_strpbrk(char *s, const char *accept);
char *_strstr(char *haystack, const char *needle);

char *_memcpy(char *dest, const char *src, unsigned int n)
{
	char *start = dest;
	while (n-- > 0)
	{
		*dest++ = *src++;
	}
	return (start);
}

char *_strchr(char *s, char c)
{
	while (*s)
	{
		if (*s == c)
		{
			return (s);
		}
		s++;
	}
	return ((c == '\0') ? s : NULL);
}

unsigned int _strspn(char *s, const char *accept)
{
	unsigned int count = 0;
	while (*s)
	{
		const char *a = accept;
		while (*a && *a != *s)
		{
			a++;
		}
		if (*a == '\0')
		{
			break;
		}
		count++;
		s++;
	}
	return (count);
}

char *_strpbrk(char *s, const char *accept)
{
	while (*s)
	{
		const char *a = accept;
		while (*a)
		{
			if (*s == *a)
			{
				return (s);
			}
			a++;
		}
		s++;
	}
	return (NULL);
}

char *_strstr(char *haystack, const char *needle)
{
	if (!*needle)
	{
		return (haystack);
	}
	while (*haystack)
	{
		char *h = haystack;
		char *n = (char *)needle;
		while (*h && *n && (*h == *n))
		{
			h++;
			n++;
		}
		if (!*n)
		{
			return (haystack);
		}
		haystack++;
	}
	return (NULL);
}
