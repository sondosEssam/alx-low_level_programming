/**
 * main -Entry point of the program
 *
 * Description: prints all alphabets upper and lower V2
 * Return: Always 0 (success)
 */
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
int main(void)
{
	int c;
	int j;
	int i;
	int z;
	int r;

	r = 1;
	for (z = '0'; z <= '9'; z++)
	{
		for (i = '0'; i <= '9'; i++)
		{
			for (c = z; c <= '9'; c++)
			{
				for (j = '0'; j <= '9'; j++)
				{
					if (((c * 10) + j) > ((z * 10) + i))
					{
						putchar(z);
						putchar(i);
						putchar(' ');
						putchar(c);
						putchar(j);
					if (z == '9' && i == '8')
					{
						r = 0;
					}
					if (r == 1)
					{
						putchar(',');
						putchar(' ');
					}
					}
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
