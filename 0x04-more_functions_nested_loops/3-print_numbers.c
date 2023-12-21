/**
 * print_numbers -Entry point
 *
 * Description: check if uper or no
 * Return: 0
 */
#include"main.h"
void print_numbers(void)
{
	char c;

	for (c = '0'; c <= '9'; c++)
	{
		_putchar(c);
	}
	_putchar('\n');
}
