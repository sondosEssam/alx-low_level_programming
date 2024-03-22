#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * add_dnodeint - function
 * @head: arg 1
 * @n: number
 * Return: size_t
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *curr = malloc(sizeof(int));

	if (curr == NULL || head == NULL)
		return (NULL);
	curr->n = n;
	curr->prev = NULL;
	if (*head == NULL)
	{
		curr->next = NULL;
		*head = curr;
		return (*head);
	}
	curr->next = *head;
	*head = curr;
	return (*head);
}
