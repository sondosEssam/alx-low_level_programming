/**
 * _puts -Entry point
 *
 * Description: this function output the  string
 * @str: the string
 * Return: void
 */
#include"main.h"
void _puts(char *str)
{
	while (*str != 0)
	{
		_putchar(*str);
		str++;
	}
	_putchar('\n');
}
