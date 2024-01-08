/**
 * _strchr - Function to do tehe for loop job
 * @s: the dewsniation
 * @c: the source
 * Return: charcter
*/
#include"main.h"
char *_strchr(char *s, char c)
{
	char *tmp = s;

	while (tmp != 0)
	{
		if (*tmp == c)
			break;
		tmp++;
	}
	return (tmp);
}
