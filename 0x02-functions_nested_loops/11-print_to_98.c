/**
 * print_to_98 -Entry point
 * @c: -ArgumentChar
 * Description: Check if lower or higher
 * Return: 1 if loweralpha 0 if else
 */
#include"main.h"
#include<stdio.h>
void print_to_98(int c)
{
	int a;

	if (c == 98)
		printf("%d", c);
	else if (c > 98)
	{
		printf("%d", c);
		for (a = c + 1; a >= 98; a--)
		{
			printf(", %d", a);
		}
	}
	else
	{
		printf("%d", c);
		for (a = c + 1; a <= 98; a++)
		{
			printf(", %d", a);
		}
	}
	printf("\n");
}
