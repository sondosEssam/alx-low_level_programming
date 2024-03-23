#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * dlistint_len - function
 * @h: arg 1
 * Return: size_t
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t r = 0;
	const dlistint_t *curr = h;

	if (h == NULL)
		return (r);
	while (curr != NULL)
	{
		curr = curr->next;
		r++;
	}
	return (r);
}
/**
 * insert_dnodeint_at_index - function
 * @h: arg 1
 * @idx: idx
 * @n: n
 * Return: size_t
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *curr = *h;
	dlistint_t *new_node = malloc(sizeof(dlistint_t));
	dlistint_t *next = NULL;

	if (new_node == NULL)
		return (NULL);
	if (dlistint_len(*h) < idx)
	{
		free(new_node);
		return (NULL);
	}
	new_node->n = n;
	if (idx == 0)
	{
		new_node->prev = NULL;
		new_node->next = *h;
		if (*h != NULL)
			(*h)->prev = new_node;
		*h = new_node;
		return (new_node);
	}
	while (--idx)
		curr = curr->next;
	next = curr->next;
	curr->next = new_node;
	new_node->next = next;
	new_node->prev = curr;
	if (next != NULL)
		next->prev = new_node;
	return (new_node);
}
