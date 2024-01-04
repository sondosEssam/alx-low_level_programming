/**
* cap_string -Function that concancate two strings
* @n: second strin
* Return: pointer to the concanetated word
*/
#include"main.h"
char *cap_string(char *n)
{
	int tmp = 0;
	int val = 0;
	char chars [] = {',', ';', '.', '!', '?', '"', '(', ')', '{', '}', ' ', '\n', '\t' };

	while (n[tmp] != '\0')
	{
		for (val = 0; val < 13; val++)
		{
			if (chars[val] == n[tmp] && n[tmp + 1] != '\0' && n[tmp + 1] >= 97)
			{
				n[tmp + 1] -= 32;
				tmp++;
				break;
			}
		}
	tmp++;
	}
	return (n);
}
