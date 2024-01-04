/**
* _strncpy -Function that concancate two strings
* @dest: second string
* @src: first string
* @n: no of bytes
* Return: pointer to the concanetated word
*/
#include"main.h"
char *_strncpy(char *dest, char *src, int n)
{
	int tmp = 0;
	char *tmp2 = dest;

	while (n != 0)
	{
		if (*src != 0)
		{
			*(dest + tmp) = *src;
			src++;
		}
		else
		{
			*(dest + tmp) = 0;
		}
		tmp++;
		n--;
	}
	return (dest);
}
