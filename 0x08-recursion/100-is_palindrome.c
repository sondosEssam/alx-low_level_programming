#include"main.h"
/**
 * end - function
 * @s: string
 * Return: int
 */
char *end(char *s)
{
	if (*s == '\0')
		return (s - 1);
	return (end(s + 1));
}
/**
 * endi - function
 * @s: string
 * @i: inti
 * Return: int
 */
int endi(char *s, int i)
{
	if (s == (end(s) - i) || (s - 1) == (end(s) - i))
	return (1);
	else if (*s != *(end(s) - i))
	return (0);
	else
	return (endi(s + 1, i + 1));
}
/**
 * is_palindrome - function that prints a string, followed by a new line
 * @s: string to be printed
 * Return: void
*/
int is_palindrome(char *s)
{
	return (endi(s, 0));
}
