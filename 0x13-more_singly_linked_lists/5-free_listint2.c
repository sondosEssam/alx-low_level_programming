#include<stdio.h>
#include<stdlib.h>
#include"lists.h"
#include<string.h>
/**
 * free_listint2 - function to print lists
 * @head: head of the list
 * Return: no of nodes
*/
void free_listint2(listint_t **head)
{
	listint_t *tmp, *curr;

	if (head == NULL)
		return;
	curr = *head;
	while (curr != NULL)
	{
		tmp = curr->next;
		free(curr);
		curr = tmp;
	}
	*head = NULL;
}
