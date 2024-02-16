#include<stdio.h>
#include"lists.h"
/**
 * get_nodeint_at_index - function to print lists
 * @head: head of the list
 * @index: ind
 * Return: no of nodes
*/
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *new_node;
	size_t n = 0;

	if (head == NULL)
		return (0);
	new_node = head;
	while (new_node != NULL)
	{
		if (n == index)
			return (new_node);
		n++;
		new_node = new_node->next;
	}
	return (NULL);
}
