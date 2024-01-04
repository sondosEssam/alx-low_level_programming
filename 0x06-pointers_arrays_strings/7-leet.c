/**
* leet -Function that concancate two strings
* @n: second strin
* Return: pointer to the concanetated word
*/
#include"main.h"
char *leet(char *n)
{
	int i;
	int final = 0;
	int j;

	while (*(n + final) != 0)
		final++;
	char chars [] = {'a', 'e', 'o', 't', 'l'};
	char ints [] = { '4', '3', '0', '7', '1' };

	for (i = 0; i < final; i++)
	{
		for (j = 0 ; j < 5 ; j++)
		{
			if (n[i] == chars[j] || n[i]  == (chars[j] - 32))
			n[i] = ints[j];

		}
	}
	return (n);
}
