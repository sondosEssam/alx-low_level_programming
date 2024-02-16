#include<stdio.h>
#include"lists.h"
/**
 * sum_listint - function to print lists
 * @head: head of the list
 * Return: no of nodes
*/
int sum_listint(listint_t *head)
{
	const listint_t *new_node;
	int sum = 0;

	if (head == NULL)
		return (0);
	new_node = head;
	while (new_node != NULL)
	{
		sum += new_node->n;
		new_node = new_node->next;
	}
	return (sum);
}
