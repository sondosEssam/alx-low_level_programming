/**
 * more_numbers -Entry point
 *
 * Description: print nums from 0 to 9
 * Return: 0
 */
#include"main.h"
void more_numbers(void)
{
	int i;
	int j;
	int s2;

	s2 = 1;
	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <= 14; j++)
		{
			if (j >= 10)
			{
				_putchar(s2 + 48);
			}
			_putchar((j % 10) + 48);
		}
	_putchar('\n');
	}
}
