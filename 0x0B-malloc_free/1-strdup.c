#include"main.h"
#include<stdlib.h>
/**
 * _strdup - function to create an array
 * @str: size of the array
 * Return: pointeer
*/
char *_strdup(char *str)
{
	char *ptr;
	int i = 0;

	if (str == NULL)
		return ('\0');
	while (str[i] != '\0')
		i++;
	ptr = malloc((i - 1));
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
