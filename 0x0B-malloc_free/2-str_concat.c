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

	if (str == NULL)
		return ('\0');
	while (str[i] != '\0')
		i++;
	ptr = malloc((i));
	if (ptr == NULL)
		return ('\0');
	i = 0;
	while (str[i] != '\0')
	{
		ptr[i] = str[i];
		i++;
	}
	return (ptr);
}
