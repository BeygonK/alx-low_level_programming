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
	void *new_ptr;

	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}

	if (ptr == NULL)
	{
		new_ptr = malloc(new_size);
		if(new_ptr == NULL)
			return (NULL);
		return (new_ptr);
	}

	new_ptr = realloc(ptr, new_size);
	if(new_ptr == NULL)
		return (NULL);

	return (new_ptr);
}
