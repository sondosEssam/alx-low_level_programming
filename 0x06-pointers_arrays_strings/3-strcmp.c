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
	int i = 0;

	if (s1[0] < s2[0])
		tmp = *s2 - *s1 - '\0';
	else if (s2[0] < s1[0])
		tmp = *s2 - *s1 - '\0';
	else
	{
		while (s1[i] == s2[i] && s1[i] != '\0' && s2[i] != '\0')
			i++;
		if (s1[i] < s2[i])
			tmp = *s2 - *s1 - '\0';
		else if (s2[i] < s1[i])
			tmp = *s1 - *s2 - '\0';
	}
	return (tmp);
}
