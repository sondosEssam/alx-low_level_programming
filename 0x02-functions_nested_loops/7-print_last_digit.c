/**
 * print_last_digit -Entry point
 * @n: -ArgumentChar
 * Description: print last digit
 * Return: Always 0
 */
#include"main.h"
int print_last_digit(int n)
{
	int r;

	if (n < 0)
		n = n * (-1);
	r = n % 10;
	_putchar(r + '0');
	return (r);
}
