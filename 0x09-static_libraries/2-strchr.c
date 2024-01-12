/**
 * _strchr - search for the 1st occurance of a char
 * @s: the string
 * @c: charachter to search for
 * Return: char pointer
*/
#include"main.h"
char *_strchr(char *s, char c)
{
	char *tmp = s;

	while (tmp != 0)
	{
		if (*tmp == c)
			return (tmp);
		tmp++;
	}
	return ('\0');
}
