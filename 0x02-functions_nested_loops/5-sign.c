/**
 * print_sign -Entry point
 * @n: -ArgumentChar
 * Description: Check if lower or higher
 * Return: 1 if loweralpha 0 if else
 */
#include"main.h"
int print_sign(int n)
{
	int r;

	if (n > 0)
	{
		r = 1;
		_putchar('+');
	}
	else if (n == 0)
	{
		r = 0;
		_putchar('0');
	}
	else
	{
		r = -1;
		_putchar('-');
	}
	return (r);
}
