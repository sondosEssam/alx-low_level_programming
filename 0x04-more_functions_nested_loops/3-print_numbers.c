/**
 * print_numbers -Entry point
 *
 * Description: print nums from 0 to 9 
 * Return: 0
 */
#include"main.h"
void print_numbers(void)
{
	int c;

	for (c = 0; c <= 9; c++)
	{
		_putchar(c + '0');
	}
	_putchar('\n');
}
