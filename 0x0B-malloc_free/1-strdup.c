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
	int i;

	if (str == NULL)
		return ('\0');
	while (str[i] != '\0')
		i++;
	ptr = malloc(sizeof(char) * (i - 1));
	if (ptr == NULL)
		return ('\0');
	ptr = str;
	return (ptr);
}
