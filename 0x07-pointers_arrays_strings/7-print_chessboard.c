/**
 * print_chessboard - Function to do tehe for loop job
 * @a: the dewsniation
 * Return: void
*/
#include"main.h"
#include<stdio.h>
void print_chessboard(char (*a)[8])
{
	int j = 0;

	while (a != 0)
	{
		for (j = 0; j < 8; j++)
		{
			//if ((tmp[j] >=97 && tmp[j] <= 122) || (tmp[j] >=65 && tmp[j] <=91))
				putchar(*a[j]);
		}
		a += 1;
	} 
	
}
