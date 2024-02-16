#include<stdio.h>
#include"lists.h"
/**
 * print_listint - function to print lists
 * @h: head of the list
 * Return: no of nodes
*/
size_t print_listint(const listint_t *h)
{
	const listint_t *new_node = h;
	size_t n = 0;

	while (new_node != NULL)
	{
		printf("%d\n", new_node->n);
		n++;
		new_node = new_node->next;
	}
	return (n);
}
