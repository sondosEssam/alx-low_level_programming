#include<stdio.h>
#include<stdlib.h>
#include"lists.h"
#include<string.h>
/**
 * free_list - function to print lists
 * @head: head of the list
 * Return: no of nodes
*/
void free_list(list_t *head)
{
	list_t *prev = head;

	head = head->next;
	while (head->next != NULL)
		{
			free(prev->str);
			free(prev);
			prev = head;
			head = head->next;
		}
		free(head->str);
		free(head);
}
