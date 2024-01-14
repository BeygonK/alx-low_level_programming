#include "lists.h"
/**
 * sum_dlistint - sums the data of the list
 * @head: pointer to the first node
 *
 * Return: sum (int)
 */
int sum_dlistint(dlistint_t *head)
{
	int sum;
	dlistint_t *temp;

	sum = 0;
	if (head == NULL)
		return (0);
	temp = head;
	while (temp != NULL)
	{
		sum += temp->n;
		temp = temp->next;
	}

	return (sum);

}
