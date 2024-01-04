/**
* rot13 -Function that concancate two strings
* @dest: second string
* @src: first string
* @n: no of bytes
* Return: pointer to the concanetated word
*/
#include"main.h"
char *rot13(char *n)
{
	int tmp = 0;

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
