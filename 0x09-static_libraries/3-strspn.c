/**
 * _strspn - Function to do tehe for loop job
 * @s: the dewsniation
 * @accept: the source
 * Return: charcter
*/
#include"main.h"
unsigned int _strspn(char *s, char *accept)
{
	int i = 0;
	int j;

	while (s[i] != '\0')
	{
		j = 0;
		while (accept[j] != '\0')
		{
			if (s[i] == accept[j])
				break;
			j++;
			if (accept[j] == '\0')
				return (i);
		}
		i++;
	}
	return (i);
}
