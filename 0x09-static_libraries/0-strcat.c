/**
* _strcat -Function that concancate two strings
* @dest: second string
* @src: first string
* Return: void
*/
#include"main.h"
char *_strcat(char *dest, char *src)
{
	int tmp = 0;
	char *tmp2 = dest;

	while (*tmp2 != 0)
	{
		tmp++;
		tmp2++;
	}
	while (*src != 0)
	{
		*(dest + tmp) = *src;
		src++;
		tmp++;
	}
	return (dest);
}
