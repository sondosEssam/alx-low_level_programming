/**
* leet -Function that concancate two strings
* @n: second strin
* Return: pointer to the concanetated word
*/
#include<stdio.h>
#include"main.h"
char *leet(char *n)
{
	char *final = n;
	int j;
	char chars [] = {'a', 'e', 'o', 't', 'l'};
	char ints [] = { '4', '3', '0', '7', '1' };

	while (*final != 0)
	{
		for (j = 0 ; j < 5 ; j++)
		{
			if (*final == chars[j] || *final  == (chars[j] - 32))
			*final = ints[j];

		}
		final++;
	}
	return (n);
}
