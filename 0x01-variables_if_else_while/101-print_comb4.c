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

	for (i = '0'; i <= '9'; i++)
	{
		for (c = i + 1; c <= '9'; c++)
		{
			for (j = c + 1; j <= '9'; j++)
			{
				putchar(i);
				putchar(c);
				putchar(j);
				if (i != '7')
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
