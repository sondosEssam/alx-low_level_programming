/**
 *  puts_half -Entry point
 *
 * Description: this function output the  string
 * @str: the string
 * Return: void
 */
#include"main.h"
void  puts_half(char *str)
{
	char *rev = str;

	while (*rev != 0)
		rev++;
	while (str < rev)
	{
		str++;
		rev--;
	}
	while (*str != 0)
	{
		_putchar(*str);
		str++;
	}
	_putchar('\n');
}
