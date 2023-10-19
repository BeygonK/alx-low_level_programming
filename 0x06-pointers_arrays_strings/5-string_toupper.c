#include "main.h"
#include <ctype.h>
/**
 * string_toupper - changes lowercase to uppercase
 * @str: string
 * Return: 0
 */
char *string_toupper(char *str)
{
	int i;
	
	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'a' && str[i] <= 'z')
			str[i] = str[i] - 32;
		i++;
	}

	return (str);
}
