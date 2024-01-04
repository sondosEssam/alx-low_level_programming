/**
* _strncmp -Function that concancate two strings
* @s1: second string
* @s2: first string
* Return: integer represting if the two strings are equal or not
*/
#include"main.h"
int _strcmp(char *s1, char *s2)
{
	int tmp = 0;

	while (*s1 && (*s1 == *s2))
	{
		s1++;
		s2++;
	}

	if (s1[0] < s2[0])
		tmp = *s2 - *s1 - '0';
	else if (s2[0] < s1[0])
		tmp = *s2 - *s1 - '0';
	return (tmp);
}
