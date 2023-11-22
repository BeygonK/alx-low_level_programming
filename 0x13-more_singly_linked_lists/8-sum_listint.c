#include "lists.h"
/**
 * sum_listint - returns sum
 * @head: pointer to the head node
 *
 * Return: sum of all data
 */
int sum_listint(listint_t *head)
{
	int sum = 0;
	listint_t *current = head;

	while (current != NULL)
	{
		sum += current->n;
		current = current->next;
	}

	return (sum);
}
