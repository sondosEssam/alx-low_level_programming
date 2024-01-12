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
	char s;

	if (argc < 2)
	{
		printf("0\n");
		return (0);
	}
	for (i = 1; i < argc; i++)
	{
		s = *argv[i];
		if (s == '0')
			continue;
		else if (atoi(s) == 0)
		{
			printf("Error\n");
			return (1);
		}
			um += atoi(argv[i]);
	}
	printf("%d\n", um);
	return (0);
}
