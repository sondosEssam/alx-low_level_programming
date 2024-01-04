/**
* _strncat -Function that concancate two strings
* @dest: second string
* @src: first string
* @n: no of bytes
* Return: pointer to the concanetated word
*/
#include"main.h"
char *_strncat(char *dest, char *src, int n)
{
	int tmp = 0;
	char *tmp2 = dest;

	while (*tmp2 != 0)
	{
		tmp++;
		tmp2++;
	}
	while (n != 0)
	{
		if (*src == 0)
			break;
		*(dest + tmp) = *src;
		src++;
		tmp++;
		n--;
	}
	return (dest);
}
