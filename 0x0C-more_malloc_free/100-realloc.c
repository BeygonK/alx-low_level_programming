#include "main.h"
#include <stdlib.h>
#include <stddef.h>
/**
 * _realloc - reallocates memory block
 * @ptr: ponter to prev memory
 * @new_size: new size of memory block
 * @old_size: param
 * Return: pointer to reallcted memory
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *new_ptr;
	unsigned int i;

	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}

	if (ptr == NULL)
	{
		new_ptr = malloc(new_size);
		if (new_ptr == NULL)
			return (NULL);
		return (new_ptr);
	}

	if (new_size == old_size)
		return (ptr);

	new_ptr = malloc(new_size);
	if (new_ptr == NULL)
		return (NULL);

	if (new_size > old_size)

	old_size = new_size;
	for (i = 0; i < old_size; i++)
		((char *)new_ptr)[i] = ((char *)ptr)[i];

	free(ptr);

	return (new_ptr);
}
