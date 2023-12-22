/**
 * print_square -Entry point
 * @size : size of square
 * Description: check if uper or no
 * Return: void
 */
#include"main.h"
void print_square(int size)
{
	int i;
	int l;

	i = 0;
	l = size;
	if (size <= 0)
	{
		_putchar('\n');
		return;
	}
	while (size > 0)
	{
		while (i < l)
		{
			_putchar('#');
			i++;
		}
		_putchar('\n');
		size--;
		i = 0;
	}
}
