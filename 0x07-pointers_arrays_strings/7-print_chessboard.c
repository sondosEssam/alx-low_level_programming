/**
 * print_chessboard - Function to do tehe for loop job
 * @a: the dewsniation
 * Return: void
*/
#include"main.h"
#include<stdio.h>
void print_chessboard(char (*a)[8])
{
	for (int i = 0; i < 8; i++)
	{
		for (int j = 0; j < 8; j++)
		{
			printf("%c ", a[i][j]);
		}
		printf("\n");
	}
}
