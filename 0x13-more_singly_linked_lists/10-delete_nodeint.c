#include "lists.h"
#include <stdlib.h>
/**
 * delete_nodeint_at_index - deletes a node
 * @head: pointer to the head node
 * @index: index of the node to be dleted
 *
 * Return: 1 if success, else -1
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int count = 0;
	listint_t *temp, *prev;

	if (*head == NULL)
		return (-1);

	if (index == 0)
	{
		temp = *head;
		*head = (*head)->next;
		free(temp);
		return (1);
	}


	prev = *head;
	while (prev != NULL && count < index - 1)
	{
		prev = prev->next;
		count++;
	}

	if (prev == NULL || prev->next == NULL)
		return (-1);

	temp = prev->next;
	prev->next = temp->next;
	free(temp);

	return (1);
}
