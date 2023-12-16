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

	for (c = '0'; c <= '9'; c++)
	{
		for (j = c + 1; j <= '9'; j++)
		{
			putchar(c);
			putchar(j);
			if (c != '8')
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
