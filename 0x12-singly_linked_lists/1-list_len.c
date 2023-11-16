#include "lists.h"

/**
 * list_len - counts the number of elements
 * @h: pointer to the head of the list
 *
 * Return: the number of elements
 */
size_t list_len(const list_t *h)
{
	size_t len = 0;

	while (h != NULL)
	{
		len++;
		h = h->next;
	}

	return (len);
}
