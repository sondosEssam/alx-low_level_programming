#include<stdio.h>
#include<stdlib.h>
#include"lists.h"
#include<string.h>
/**
 * _strlen - function
 * @c: char
 * Return: anything
*/
int _strlen(const char *c)
{
	int i = 0;

	while (c[i] != '\0')
		i++;
	return (i);
}
/**
 * add_node - function to print lists
 * @head: head of the list
 * @str: char to be added
 * Return: no of nodes
*/
list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node = malloc(sizeof(list_t));

	if (new_node == NULL)
		return (NULL);
	new_node->str = strdup(str);
	new_node->len = _strlen(str);
	new_node->next = *head;
	*head = new_node;
	return (*head);
}
