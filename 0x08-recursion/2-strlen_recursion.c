/**
 * _strlen_recursion - function that prints a string, followed by a new line
 * @s: string to be printed
 * Return: int
*/
#include"main.h"
int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	return (1 + _strlen_recursion((s + 1)));
}
