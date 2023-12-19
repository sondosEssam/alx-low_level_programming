/**
 * times_table -Entry point
 *
 * Description: prints all alphabet ten times
 * Return: 0
 */
#include"main.h"
void times_table(void)
{
	int c;
	int a;
	int k;

	for (a = 0; a < 10; a++)
	{
		for (c = 0; c < 10; c++)
		{
			k = a * c;
			if (c == 0)
				_putchar('0');
			else if (k < 10 && c != 0)
			{
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
				_putchar(k + '0');
			}
			else if (k >= 10)
			{
				_putchar(',');
				_putchar(' ');
				_putchar((k / 10) + '0');
				_putchar((k % 10) + '0');
			}
		}
		_putchar('\n');
	}
}
