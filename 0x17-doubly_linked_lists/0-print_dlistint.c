#include"lists.h"
#include<stdio.h>
/**
 * print_dlistint - function
 * @h: arg 1
 * Return: size_t
*/
size_t print_dlistint(const dlistint_t *h)
{
	size_t r = 0;
	const dlistint_t *curr = h;

	if (h == NULL)
		return (r);
	while (curr != NULL)
	{
		printf("%d\n", curr->n);
		curr = curr->next;
		r++;
	}
	return (r);
}
