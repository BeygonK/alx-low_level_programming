#include "lists.h"
#include <stdlib.h>
/**
 * add_nodeint_end - adds a node at the end
 * @head: the head node
 * @n: data to be inserted
 *
 * Return: address of the newly created element
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new_node;
	listint_t *last = *head;

	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	new_node->next = NULL;

	if (*head == NULL)
		*head = new_node;
	else
	{
		while (last->next != NULL)
			last = last->next;
		last->next = new_node;
	}
	return (new_node);
}
