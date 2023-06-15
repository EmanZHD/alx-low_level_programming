#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * create_dnode - function that creates new node
 * @n: data of node
 * @prev: the link to prev node
 * @next: the link to next node
 * Return: return pointer to new node
 */

dlistint_t *create_dnode(int n, dlistint_t *prev, dlistint_t *next)
{
	dlistint_t *new;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	new->prev = prev;
	new->next = next;
	return (new);
}

/**
 * insert_dnodeint_at_index - function that inserts a new
 * node at a given position
 * @h: the head of doubly-linked list
 * @idx: the index for insertion of new node
 * @n: the data for new node
 * Return: return address of new node, or NULL if error
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *curr = *h, *localPrev = NULL;
	unsigned int count = 0;

	if (!h)
		return (NULL);
	if (idx == 0) /* to insert at list beginning*/
	{
		if (!*h)
			*h = create_dnode(n, NULL, NULL); /*for the first node*/
		else
		{
			(*h)->prev = create_dnode(n, NULL, *h);
			*h = (*h)->prev;
		}
		return (*h);
	}
	for (curr = *h; curr && (count < idx); curr = curr->next, count++)
	{
		localPrev = curr;
	}
	if ((count == idx) && (curr == NULL)) /*insert at list end*/
	{
		localPrev->next = create_dnode(n, localPrev, NULL);
		return (localPrev->next);
	}
	if ((count < idx) && (curr == NULL))/*idx too high*/
		return (NULL);
	if (localPrev != NULL)
	{       /*insert in middle of list*/
		localPrev->next = create_dnode(n, localPrev, curr);
		curr->prev = localPrev->next;
		return (localPrev->next);
	}
	return (NULL); /*should never run*/
}

