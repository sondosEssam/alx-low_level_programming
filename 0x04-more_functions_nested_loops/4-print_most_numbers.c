/**
 * print_most_numbers - print most numbrs
 *
 * Description: print nums from 0 to 9 excpet 2,4
 * Return: void
 */
#include"main.h"
void print_most_numbers(void)
{
	int i;

	for (i = 0; i <= 9; i++)
	{
		if (i != 2 && i != 4)
		_putchar(i + 48);
	}
	_putchar('\n');
}
