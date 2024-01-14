#include"main.h"
#include<stdio.h>
#include<stdlib.h>
/**
* main - entry point
* @argc: no of args
* @argv: args contents
* Return: 0
*/
int main(int argc, char *argv[])
{
	int um = 0;
	int i;
	int j [] = {25, 10, 5, 2, 1};
	int num;

	if (argc > 2 || argc == 1)
	{
		printf("Error\n");
		return (1);
	}
	num = atoi(argv[1]);
	if (num <= 0)
		return (printf("0\n"), 0);
	while (num > 0)
	{
		for (i = 0; i < 5; i++)
		{
			if (num >= j[i])
			{
				um += 1;
				num -= j[i];
				break;
			}
		}
	}
	printf("%d\n", um);
	return (0);
}
