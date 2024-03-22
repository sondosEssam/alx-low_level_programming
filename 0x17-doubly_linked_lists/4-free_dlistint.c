#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * free_dlistint - function
 * @head: arg 1
 * Return: size_t
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *tmp = NULL;

	if (head == NULL)
		return;
	tmp = head->next;
	while (tmp != NULL)
	{
		free(head);
		head = tmp;
		tmp = tmp->next;
	}
	free(head);
}
