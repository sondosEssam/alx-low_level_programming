/**
 * jack_bauer -Entry point
 *
 * Description: prints all alphabet ten times
 * Return: 0
 */
#include"main.h"
void jack_bauer(void)
{
	char a;
	char b;
	char c;
	char d;

	for (a = '0'; a <= '2'; a++)
	{
		for (b = '0'; b <= '9'; b++)
		{
			for (c = '0'; c <= '5'; c++)
			{
				for (d = '0'; d <= '9'; d++)
				{
					_putchar(a);
					_putchar(b);
					_putchar(':');
					_putchar(c);
					_putchar(d);
					_putchar('\n');
					if (a == '2' && b == '3' && c == '5' && d == '9')
						return;
				}
			}
		}
	}
}
