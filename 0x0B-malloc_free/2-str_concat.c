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
	int c1 = 0;

	if (s1 != NULL)
		len = strlen(s1);
	if (s2 != NULL)
		len += strlen(s2);
	if (s1 == NULL && s2 == NULL)
		return ('\0');
	ptr = malloc((sizeof(char) * (len + 1)));
	if (ptr == NULL)
		return (NULL);
	len = 0;
	while (s1 && s1[j] != '\0')
		ptr[j++] = s1[j];
	while (s2 && s2[len] != '\0')
		ptr[j++] = s2[len++];
	return (ptr);
}
