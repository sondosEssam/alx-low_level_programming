/**
 * print_last_digit -Entry point
 * @n: -ArgumentChar
 * Description: print last digit
 * Return: Always 0
 */
#include"main.h"
int print_last_digit(int n)
{
	n = n % 10;
	_putchar(n);
	return (n);
}
