/**
 * _strcpy -Entry point
 *
 * Description: this function output the  string
 * @dest: the string of dest
 * @src: source string
 * Return: address of dest
 */
#include"main.h"
void char *_strcpy(char *dest, char *src)
{
	char *tmp = dest;

	while (*str != 0)
	{
		*tmp = *src;
		tmp++;
		src++;
	}
	*tmp = *src;
	return (dest);
}
