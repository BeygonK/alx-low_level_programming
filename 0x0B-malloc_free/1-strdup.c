#include "main.h"
#include <stdlib.h>
#include <stddef.h>
/**
 * _strdup - duplicates the stringf
 * @str: string
 *
 * Return: 0
 */
char *_strdup(char *str)
{
	char *duplicate;
	int length = 0;
	int i;

	if (str == NULL)
		return (NULL);

	while (str[length] != '\0')
		length++;

	duplicate = (char *)malloc((length + 1) * sizeof(char));

	if (duplicate == NULL)
		return (NULL);

	for (i = 0; i <= length; i++)
		duplicate[i] = str[i];

	return (duplicate);
}
