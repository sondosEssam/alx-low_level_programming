/**
 * _memset - Function to do tehe for loop job
 * @s: the dewsniation
 * @b: the source
 * @n: no of bytes
 * Return: void
*/
#include"main.h"
char *_memset(char *s, char b, unsigned int n)
{
	char *tmp = s;

	while (n--)
	{
		*tmp = b;
		tmp++;
	}
	return (s);
}
