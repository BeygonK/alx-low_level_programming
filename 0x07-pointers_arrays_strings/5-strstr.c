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
	int i;

	if (*needle == 0)
	{
		return (haystack);
	}

	while (*haystack)
	{
		i = 0;

		if (haystack[i] == needle[i])
		{
			do {
				if (needle[i + 1] == '\0')
					return (haystack);
				i++;	
			} while (haystack[i] == needle[i]);
		}
		haystack++;
	}
	return (NULL);
}
