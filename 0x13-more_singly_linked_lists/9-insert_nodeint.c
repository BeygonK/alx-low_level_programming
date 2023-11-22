#include "lists.h"
#include <stdlib.h>
/**
 * insert_nodeint_at_index - inserts node at a given position
 * @head: pointer to the head node
 * @idx: index where node should be inserted
 * @n: interger to insert
 *
 * Return: address of the inserted node
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int count = 0;
	listint_t *new_node, *temp;

	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
		return (NULL);

	new_node->n = n;

	if (idx == 0)
	{
		new_node->next = *head;
		*head = new_node;
		return (new_node);
	}

	temp = *head;
	while (temp != NULL && count < idx - 1)
	{
		temp = temp->next;
		count++;
	}

	if (temp == NULL || temp->next == NULL)
	{
		free(new_node);
		return (NULL);
	}

	new_node->next = temp->next;
	temp->next = new_node;

	return (new_node);
}
