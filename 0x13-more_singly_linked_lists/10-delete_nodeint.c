#include<stdio.h>
#include<stdlib.h>
#include"lists.h"
#include<string.h>
/**
 * delete_nodeint_at_index - function to print lists
 * @head: head of the list
 * @index: no
 * Return: no of nodes
*/
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *curr = *head, *prev = NULL, *next = (*head)->next;
	unsigned int ni = 0;

	if (*head == NULL || head == NULL)
		return (-1);
	while (curr != NULL)
	{
		if (index == 0)
		{
			*head = next;
			free(curr);
			return (1);
		}
		if (ni == index)
		{
			prev->next = next;
			free(curr);
			return (1);
		}
		ni++;
		prev = curr;
		curr = curr->next;
		next = curr->next;
	}
	if (ni < index)
		return (-1);
	return (-1);
}
