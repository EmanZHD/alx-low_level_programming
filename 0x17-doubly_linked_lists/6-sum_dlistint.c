#include "lists.h"

/**
 * sum_dlistint - function that sum of elements in list
 * @head: pointer to the doubly linked list's head
 * Return: return sum of all the data (n) of a dlistint_t linked list
 * and 0 if list is empty
 */

int	sum_dlistint(dlistint_t *head)
{
	int	sum;

	if (!head)
		return (0);
	sum = 0;
	while (head)
	{
		sum = sum + head->n;
		head = head->next;
	}
	return (sum);
}

