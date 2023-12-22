/**
 * print_line -Entry point
 * @n : num1
 * Description: check if uper or no
 * Return: 0
 */
#include"main.h"
void print_diagonal(int n)
{
	int i;
	int l;

	i = 0;
	l = n;
	while (n > 0)
	{
		while (i < (l - n + 1))
		{
			if (i == (l - n))
			{
				_putchar('\\');
				break;
			}
			_putchar(' ');
			i++;
		}
		_putchar('\n');
		n--;
		i = 0;
	}
}
