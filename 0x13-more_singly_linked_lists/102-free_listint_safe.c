#include "lists.h"
#include <stdlib.h>
/**
 * free_listint_safe - frees list
 * @h: pointer to head
 *
 * Return: size of list
 */
size_t free_listint_safe(listint_t **h)
{
	size_t size = 0;
	listint_t *current, *next;

	current = *h;

	while (current != NULL)
	{
		size++;
		next = current->next;
		free(current);

		if ((size_t)next <= size)
		{
			*h = NULL;
			break;
		}

		current = next;
	}

	return (size);
}
