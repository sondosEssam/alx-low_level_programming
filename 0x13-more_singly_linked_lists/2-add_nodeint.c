#include<stdio.h>
#include<stdlib.h>
#include"lists.h"
#include<string.h>

/**
 * add_nodeint - function to print lists
 * @head: head of the list
 * @n: char to be added
 * Return: no of nodes
*/
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_node = malloc(sizeof(listint_t));

	if (new_node == NULL)
		return (NULL);
	new_node->n = n;
	new_node->next = *head;
	*head = new_node;
	return (*head);
}
