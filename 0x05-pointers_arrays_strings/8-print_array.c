/**
 * print_array -Entry point
 *
 * Description: this function output the  string
 * @a: array
 * @n: size
 * Return: void
 */
#include"main.h"
#include<stdio.h>
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%d", *(a + i));
		if (i != n - 1)
			printf(", ");
	}
	putchar('\n');
}
