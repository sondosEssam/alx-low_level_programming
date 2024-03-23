#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * sum_dlistint - function
 * @head: arg 1
 * Return: size_t
 */
int sum_dlistint(dlistint_t *head)
{
	if (head == NULL)
		return (0);

	return (head->n + sum_dlistint(head->next));
}
