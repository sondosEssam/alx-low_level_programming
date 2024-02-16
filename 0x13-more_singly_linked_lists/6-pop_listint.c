#include<stdio.h>
#include<stdlib.h>
#include"lists.h"
#include<string.h>
/**
 * pop_listint - function to print lists
 * @head: head of the list
 * Return: no of nodes
*/
int pop_listint(listint_t **head)
{
	int n;
	listint_t *curr = *head;

	n = curr->n;
	*head = curr->next;
	free(curr);
	return (n);
}
