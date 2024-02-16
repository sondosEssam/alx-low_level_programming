#include<stdio.h>
#include"lists.h"
/**
 * list_len - function to print lists
 * @h: head of the list
 * Return: no of nodes
*/
size_t list_len(const list_t *h);
{
	const list_t *new_node = h;
	size_t n = 0;

	while (new_node != NULL)
	{
		n++;
		new_node = new_node->next;
	}
	return (n);
}
