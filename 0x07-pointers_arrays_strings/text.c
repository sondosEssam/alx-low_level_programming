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
	char (*ptr)[8] = a;

	while (*ptr != 0)
	{
		j = 0;
		while (ptr[j] != 0)
		{
				printf("%c",*ptr[j]);
				j++;
		}
		ptr++;
	} 
}
