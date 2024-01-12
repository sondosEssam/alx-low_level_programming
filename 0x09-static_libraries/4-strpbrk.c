/**
 * _strpbrk - Function to do tehe for loop job
 * @s: the dewsniation
 * @accept: the source
 * Return: void
*/
#include"main.h"
char *_strpbrk(char *s, char *accept)
{
	char *tmp = s;
	int j;

	while (tmp != 0)
	{
		j = 0;
		while (accept[j] != '\0')
		{
			if (accept[j] == *tmp)
				return (tmp);
			j++;
		}
		tmp++;
	}
	return (tmp);
}
