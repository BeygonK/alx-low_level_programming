#include "lists.h"
/**
 * print_listint - print all elements
 * @h: pointer to the head node
 *
 * Return: number of nodes
 */
size_t print_listint(const listint_t *h)
{
	int nodes;
	const listint_t *current;

	nodes = 0;
	current = h;

	while (current)
	{
		printf("%d\n", current->n);
		current = current->next;
		nodes++;
	}


	return (nodes);
}
