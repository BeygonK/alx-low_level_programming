#include "function_pointers.h"

/**
 * array_iterator - Executes a given function
 * @array: The array to iterate
 * @size:The size of an array
 * @action: POinter to the func to be exec
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	if (array != NULL && action != NULL)
	{	
		size_t i;

		for (i = 0; i < size; i++)
		{
			action(array[i]);
		}
	}
}
