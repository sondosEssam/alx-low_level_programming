/**
 * _memcpy - Function to do tehe for loop job
 * @dest: the dewsniation
 * @src: the source
 * @n: no of bytes
 * Return: void
*/
#include"main.h"
char *_memcpy(char *dest, char *src, unsigned int n)
{
	char *tmp = dest;

	while (n--)
	{
		*tmp = *src;
		src++;
	}
	return (dest);
}
