#include "function_pointers.h"

/**
 * int_index - Searches for an integer in an array
 * @array: The array to search
 * @size: No. of elements in an array
 * @cmp: A pointer to func
 *
 * Return: index
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	if (array != NULL && cmp != NULL && size > 0)
	{
		int i;

		for (i = 0; i < size; i++)
		{
			if (cmp(array[i]) != 0)
			{
				return (i);
			}
		}
	}
	return (-1);
}
