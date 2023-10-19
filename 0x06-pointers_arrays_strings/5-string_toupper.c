#include "main.h"
#include <ctype.h>
/**
 * string_toupper - changes lowercase to uppercase
 * @str: string
 * Return: 0
 */
char *string_toupper(char *str)
{
	char *ptr;

	ptr = str;
	while (ptr != '\0')
	{
		ptr = toupper(ptr);
		ptr++;
	}
	return (ptr);

}
