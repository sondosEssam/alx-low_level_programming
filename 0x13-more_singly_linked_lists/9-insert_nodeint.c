#include<stdio.h>
#include<stdlib.h>
#include"lists.h"
#include<string.h>
/**
 * listint_t *insert_nodeint_at_index - function to print lists
 * @head: head of the list
 * @idx: no
 * @n: char to be added
 * Return: no of nodes
*/
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new_node;
	listint_t *curr = *head, *prev = NULL;
	unsigned int ni = 0;

	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
		return (NULL);
	new_node->n = n;
	if (idx == 0)
	{
		new_node->next =  *head;
		*head = new_node;
		return (new_node);
	}
	if (*head == NULL)
	{
		free(new_node);
		return (NULL);
	}
	while (curr != NULL)
	{
		if (ni == idx)
		{
			prev->next = new_node;
			new_node->next = curr;
			return (new_node);
		}
		ni++;
		prev = curr;
		curr = curr->next;
	}
	if (ni == idx)
	{
		prev->next = new_node;
		new_node->next = NULL;
		return (new_node);
	}
	free(new_node);
	return (NULL);
}
