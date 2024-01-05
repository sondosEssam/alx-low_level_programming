/**
* print_number -Function that concancate two strings
* @n: no of bytes
* Return: pointer to the concanetated word
*/
#include"main.h"
void print_number(int n)
{
	int r;
	int siz = 0;
	int q;
	int mul = 1;

	if (n < 0)
	{
		_putchar('-');
		n = n * -1;
	}
	r = n;
	while (r / 10  != 0)
	{
		siz++;
		r /= 10;
	}
	while (siz != 0)
	{
		r = siz;
		while (r--)
			mul *= 10;
		q = (int)n / mul;
		_putchar(q + '0');
		n %= (int)mul;
		siz--;
		mul = 1;

	}
	_putchar(n + '0');

}
