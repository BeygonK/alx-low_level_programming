#include "lists.h"
/**
 * listint_len - Returns the number of lements
 * @h: the head node
 *
 * Return: Number of elements
 */
size_t listint_len(const listint_t *h)
{
	int nodes = 0;
	const listint_t *current = h;

	while (current)
	{
		nodes++;
		current = current->next;
	}

	return (nodes);
}
