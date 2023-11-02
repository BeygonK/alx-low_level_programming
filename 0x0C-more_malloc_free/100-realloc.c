#include "main.h"
#include <stdlib.h>
#include <stddef.h>
/**
 * _realloc - reallocates memory block
 * @ptr: ponter to prev memory
 * @old_size: size of allocated space
 * @new_size: new size of memory block
 *
 * Return: pointer to reallcted memory
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *new_ptr;

	if (new_size == old_size)
		return (ptr);

	if (ptr == NULL)
		return (malloc(new_size));

	if (new_size == NULL)
	{
		free(ptr);
		return (NULL);
	}

	new_ptr = malloc(new_size);

	if (new_ptr == NULL)
		return (NULL);

	memcpy(new_ptr, ptr, (old_size < new_size ? old_size : new_size));

	free(ptr);

	return (new_ptr);
}
