#include<stdio.h>
#include<stdlib.h>
#include"lists.h"
#include<string.h>
/**
 * add_nodeint_end - function to print lists
 * @head: head of the list
 * @n: char to be added
 * Return: no of nodes
*/
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new_node;
	listint_t *curr = *head;

	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
		return (NULL);
	new_node->n = n;
	new_node->next = NULL;
	if (*head == NULL)
	{
		(*head) = new_node;
		return (*head);
	}
	while (curr->next != NULL)
		curr = curr->next;
	curr->next = new_node;
	return (*head);
}
