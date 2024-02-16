#include<stdio.h>
#include"lists.h"
/**
 * print_list: function to print lists
 * @h: head of the list
 * Return: no of nodes
*/
size_t print_list(const list_t *h)
{
	if (h == NULL)
		return (0);
	const list_t *new_node = h;
	size_t n = 0;

	while (new_node != NULL)
	{
		if (new_node->str != NULL)
			printf("[%d] %s\n", new_node->len, new_node->str);
		else
			printf("[0] (nil)\n");
		n++;
		new_node = new_node->next;
	}
	return (n);
}
