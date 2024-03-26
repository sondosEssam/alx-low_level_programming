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
 * delete_dnodeint_at_index - function
 * @head: arg 1
 * @index: idx
 * Return: size_t
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *curr = *head;
	dlistint_t *next = NULL, *deletd = NULL;

	if (dlistint_len(*head) <= index)
	{
		return (-1);
	}
	if (index == 0)
	{
		if (*head != NULL)
		{
			*head = (*head)->next;
			free(curr);
			return (1);
		}
		return (-1);
	}
	while (--index)
		curr = curr->next;
	deletd = curr->next;
	if (deletd != NULL)
	{
		next = deletd->next;
		if (next != NULL)
			next->prev = curr;
		curr->next = next;
		free(deletd);
	return (1);
	}
	curr->next = NULL;
	return (-1);
}
