#include"lists.h"
#include<stdio.h>
/**
 * dlistint_len - function
 * @h: arg 1
 * Return: size_t
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t r = 0;
	const dlistint_t *curr = h;

	if (h == NULL)
		return (r);
	while (curr != NULL)
	{
		curr = curr->next;
		r++;
	}
	return (r);
}
