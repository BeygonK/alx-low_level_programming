#include "lists.h"
/**
 * get_dnodeint_at_index - gets node at index
 * @head: pointer to head node
 * @index: index to find
 *
 * Return: Address of the node
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int i;

	i = 0;

	while (head != NULL)
	{
		if (i == index)
			return (head);
		head = head->next;
		i++;
	}

	return (NULL);
}
