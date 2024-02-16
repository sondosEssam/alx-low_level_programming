#include<stdio.h>
#include<stdlib.h>
#include"lists.h"
#include<string.h>
/**
 * free_listint - function to print lists
 * @head: head of the list
 * Return: no of nodes
*/
void free_listint(listint_t *head)
{
	listint_t *tmp;

	while (head != NULL)
	{
		tmp = head->next;
		free(head);
		head = tmp;
	}
}
