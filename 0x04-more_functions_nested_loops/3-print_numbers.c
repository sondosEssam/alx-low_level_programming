/**
 * print_numbers -Entry point
 *
 * Description: print nums from 0 to 9
 * Return: 0
 */
#include"main.h"
void print_numbers(void)
{
	int i;

	for (i = 0; i <= 9; i++)
	{
		_putchar(i + 48);
	}
	_putchar('\n');
}
