/**
 * print_chessboard - Function to do tehe for loop job
 * @a: the dewsniation
 * Return: void
*/
#include"main.h"
#include<stdio.h>
void print_chessboard(char (*a)[8])
{
	int i;
	int j;

	for (i = 0; i < 8; i++)
	{
		for (j = 0; j < 8; j++)
		{
			_putchar(a[i][j]);
		}
		printf("\n");
	}
}
