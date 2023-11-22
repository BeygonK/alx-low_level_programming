#include "lists.h"
/**
 * print_listint - print all elements
 * @h: pointer to the head node
 *
 * Return: number of nodes
 */
size_t print_listint(const listint_t *h)
{
	size_t nodes = 0;
	const listint_t *current = h;

	while (current)
	{
		printf("%d\n", current->n);
		current = current->next;
		nodes++;
	}


	return (nodes);
}
