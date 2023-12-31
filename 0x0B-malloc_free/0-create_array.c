#include "main.h"
#include <stddef.h>
#include <stdlib.h>
/**
 * create_array - creates array of chars
 * @size: size of an array
 * @c: char
 *
 * Return: pointer to arr
 */
char *create_array(unsigned int size, char c)
{
	char *array;
	unsigned int i;

	if (size == 0)
		return (NULL);

	array = (char *)malloc(size * sizeof(char));

	if (array == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		array[i] = c;

	return (array);
}
