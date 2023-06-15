#include "lists.h"

/**
 * sum_dlistint - function that sum of elements in list
 * @head: list
 * Return: return integer
 */

int sum_dlistint(dlistint_t *head)
{
	int sum = 0;
	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
