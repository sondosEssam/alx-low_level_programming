/**
 * print_rev -Entry point
 *
 * Description: this function output the  string
 * @str: the string
 * Return: void
 */
#include"main.h"
void print_rev(char *str)
{
	char *rev = str;

	while (*rev != 0)
		rev++;
	while (*rev != *str)
	{
		rev--;
		_putchar(*rev);
	}
	_putchar('\n');
}
