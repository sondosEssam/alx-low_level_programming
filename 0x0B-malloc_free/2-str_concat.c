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
	int len = 0;
	int j = 0;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	len = strlen(s1) + strlen(s2);
	ptr = malloc((sizeof(char) * (len + 1)));
	if (ptr == NULL)
		return (NULL);
	len = 0;
	while (s1 && s1[j] != '\0')
	{
		ptr[j] = s1[j];
		j++;
	}
	while (s2 && s2[len] != '\0')
	{
		ptr[j] = s2[len];
		j++;
		len++;
	}
	ptr[j] = '\0';
	return (ptr);
}
