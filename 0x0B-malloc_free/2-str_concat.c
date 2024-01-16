#include"main.h"
#include<stdlib.h>
#include<string.h>
/**
 * str_concat - function to create an array
 * @s1: size of the array
 * @s2: string2
 * Return: pointeer
*/
char *str_concat(char *s1, char *s2)
{
	char *ptr;
	int i = 0;
	int j = 0;
	int c1 = 0;

	if (s1 == NULL)
		c1 = 1;
	else if (s2 == NULL)
		c1 = 2;
	if (c1 != 1)
		i = strlen(s1);
	if (c1 != 2)
		i += strlen(s2);
	ptr = malloc(sizeof(char) * (i + 2));
	if (ptr == NULL)
		return ('\0');
	i = 0;
	while (s1 && s1[i] != '\0')
	{
		ptr[i] = s1[i];
		i++;
	}
	while (s2 && s2[j] != '\0')
	{
		ptr[i] = s2[j];
		i++;
		j++;
	}
	return (ptr);
}
