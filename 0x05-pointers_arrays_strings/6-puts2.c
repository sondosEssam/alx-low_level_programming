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
	char *rev = str;

	while (*rev != 0)
		rev++;
	while (str < rev)
	{
		_putchar(*str);
		str += 2;
	}
	_putchar('\n');
}
