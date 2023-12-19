/**
 * print_times_table -Entry point
 * @n : no of tables to print
 * Description: prints all alphabet ten times
 * Return: 0
 */
#include"main.h"
void print_times_table(int n)
{
	int c;
	int a;
	int k;

	if (n <= 15 || n >= 0)
	{
		for (a = 0; a <= n; a++)
		{
			for (c = 0; c <= n; c++)
			{
				k = a * c;
				if (c == 0)
					_putchar('0');
				else if (k < 10 && c != 0)
				{
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
					_putchar(' ');
					_putchar(k + '0');
				}
				else if (k >= 10 && k < 100)
				{
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
					_putchar((k / 10) + '0');
					_putchar((k % 10) + '0');
				}
				else
				{

					_putchar(',');
					_putchar(' ');
					_putchar((k / 100) + '0');
					_putchar(((k / 10) % 10) + '0');
					_putchar((k % 100) + '0');

				}
			}
			_putchar("\n");
		}
	}
}
