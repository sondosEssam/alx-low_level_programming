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
	int um;

	if (argc < 3)
	{
		printf("Error\n");
		return (1);
	}
	um = atoi(argv[1]) * atoi(argv[2]);
		printf("%d\n", um);
	return (0);
}
