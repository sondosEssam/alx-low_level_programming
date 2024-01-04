/**
* string_toupper -Function that concancate two strings
* @n: second strin
* Return: pointer to the concanetated word
*/
#include"main.h"
char *string_toupper(char *n)
{
	int tmp = 0;

	while (n[tmp] != '\0')
	{
	if (n[tmp] >= 97 && n[tmp] <= 122 && ((n[tmp-1]==','|| n[tmp-1]=';' || n[tmp-1] == '.' ||
	n[tmp-1] == '!' || n[tmp-1] == '?' || n[tmp-1] == '"' || n[tmp-1]== '(' ||n[tmp-1]==')' ||n[tmp-1]== '{' and })
		n[tmp] -= 32;
	tmp++;
	}
	return (n);
}
