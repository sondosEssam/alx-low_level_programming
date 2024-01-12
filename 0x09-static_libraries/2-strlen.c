/**
 * _strlen -Entry point
 *
 * Description: this function count length of string
 * @s: the string
 * Return: length
 */
#include"main.h"
int _strlen(char *s)
{
	int length;

	length = 0;
	while (*s != 0)
	{
		length++;
		s++;
	}
	return (length);
}
