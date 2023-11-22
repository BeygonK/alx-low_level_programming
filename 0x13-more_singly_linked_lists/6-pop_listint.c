#include "lists.h"
#include <stdlib.h>
/**
 * pop_listint - deletes the head node
 * @head: pointer to the head node
 *
 * Return: data of dleted node
 */
int pop_listint(listint_t **head)
{
	int data = 0;
	listint_t *temp;

	if (*head == NULL)
		return (0);

	data = (*head)->n;

	temp = *head;

	*head = (*head)->next;

	free(temp);

	return (data);
}
