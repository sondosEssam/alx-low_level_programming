#include"main.h"
#include<stdio.h>
/**
* main - entry point
* @argc: no of args
* @argv: args contents
* Return: 0
*/
int main(int argc, char *argv[])
{
	int i;

	if (argc > 1)
	{
		for (i = 1; i < argc; i++)
		{
			printf("%s\n", argv[i]);
		}
	}
	return (0);
}
