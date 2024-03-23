#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * get_dnodeint_at_index - function
 * @head: arg 1
 * @index: number
 * Return: size_t
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	int t = 0;
	dlistint_t *tmp = NULL;

	if (head == NULL)
		return (NULL);
	tmp = head;
	while (tmp != NULL)
	{
		if (t == (int)index)
			return (tmp);
		tmp = tmp->next;
		t++;
	}
	return (NULL);
}
