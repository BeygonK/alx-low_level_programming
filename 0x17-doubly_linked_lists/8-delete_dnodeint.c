#include "lists.h"
/**
 * delete_dnodeint_at_index - deletes node
 * @head: pointer to pointer
 * @index: index to be deleted
 *
 * Return: 1 on success otherwise 0
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *current, *temp;
	unsigned int i;

	if (head == NULL || *head == NULL)
		return (-1);
	i = 0;
	current = *head;

	if (index == 0)
	{
		*head = current->next;

		if (*head != NULL)
		{
			(*head)->prev = NULL;
		}

		free(current);
		return (1);
	}

	while (current != NULL && i < index)
	{
		current = current->next;
		i++;
	}
	if (current == NULL)
		return (-1);

	temp = current->prev;
	temp->next = current->next;

	if (current->next != NULL)
		current->next->prev = temp;

	free(current);
	return (1);
}
