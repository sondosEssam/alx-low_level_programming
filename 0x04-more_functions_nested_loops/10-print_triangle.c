/**
 * print_triangle -Entry point
 * @size : size of triangle
 * Description: check if uper or no
 * Return: void
 */
#include"main.h"
void print_triangle(int size)
{
	int i;
	int l;
	int r;

	i = 0;
	r = size;
	l = size - 1;
	if (size <= 0)
	{
		_putchar('\n');
		return;
	}
	while (size > 0)
	{
		while (i < r)
		{
			if (i < l)
				_putchar(' ');
			else if ( i >= l)
				_putchar('#');
			i++;
		}
		_putchar('\n');
		l--;
		size--;
		i = 0;
	}
}
