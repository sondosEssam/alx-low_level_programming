#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * add_dnodeint_end - function
 * @head: arg 1
 * @n: number
 * Return: size_t
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *curr = malloc(sizeof(dlistint_t)), *tmp = NULL;

	if (curr == NULL || head == NULL)
		return (NULL);
	curr->n = n;
	curr->prev = NULL;
	if (*head == NULL)
	{
		curr->next = NULL;
		*head = curr;
		return (curr);
	}
	tmp = *head;
	while (tmp->next != NULL)
		tmp = tmp->next;
	tmp->next = curr;
	curr->next = NULL;
	curr->prev = tmp;
	return (curr);
}
