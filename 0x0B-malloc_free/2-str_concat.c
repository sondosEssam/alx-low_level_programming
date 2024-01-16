#include"main.h"
#include<stdlib.h>
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


	while (s1[i] != '\0')
		i++;
	while (s2[i] != '\0')
		i++;
	ptr = malloc(sizeof(char) * (i));
	if (ptr == NULL)
		return ('\0');
	i = 0;
	while (s1[i] != '\0')
	{
		ptr[i] = s1[i];
		i++;
	}
	while (s2[j] != '\0')
	{
		ptr[i] = s2[j];
		i++;
		j++;
	}
	return (ptr);
}
