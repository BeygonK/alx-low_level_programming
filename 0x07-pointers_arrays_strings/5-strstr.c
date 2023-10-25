#include "main.h"
/**
 * _strstr - LOcates a substring.
 * @haystack: POinter to the string to be searched.
 * @needle: Pointer to the substring to be locsated
 *
 * Return: POinter
 */
char *_strstr(char *haystack, char *needle)
{
	char *h, *n;

	if (*needle == '\0')
	{
		return (haystack);
	}

	while (*haystack)
	{
		h = haystack;
		n = needle;

		while (*n && *h == *n)
		{
			h++;
			n++;
		}

		if (*n == '\0')
		{
			return (haystack);
		}

		haystack++
	}

	return (NULL);
}
