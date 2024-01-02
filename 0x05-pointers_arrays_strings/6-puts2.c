/**
 * puts2 -Entry point
 *
 * Description: this function output the  string
 * @str: the string
 * Return: void
 */
#include"main.h"
void puts2(char *str)
{
	while (*str != 0)
	{
		_putchar(*str);
		str += 2;
	}
	_putchar('\n');
}
