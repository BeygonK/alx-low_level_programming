#include "lists.h"
#include <stdlib.h>
/**
 * get_nodeint_at_index - get node at index
 * @head: pointer to head node
 * @index: index to be searched
 *
 * Return: pointer to the nth node
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int count = 0;
	listint_t *current = head;

	while (current != NULL && count < index)
	{
		current = current->next;
		count++;
	}

	if (count == index && current != NULL)
		return (current);
	else
		return (NULL);

}
