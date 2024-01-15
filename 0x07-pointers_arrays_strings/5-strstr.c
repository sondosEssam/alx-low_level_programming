/**
 * _strstr - Function to do tehe for loop job
 * @haystack: the dewsniation
 * @needle: the source
 * Return: character
*/
#include"main.h"
char *_strstr(char *haystack, char *needle)
{
	int j;
	char *tmp = haystack;

	while (tmp != 0)
	{
		j = 0;
		while (needle[j] != '\0')
		{
			if (needle[j] == *tmp)
			{
				tmp++;
			}
				j++;
			if (needle[j] == '\0')
				return (tmp - j);
			else if (needle[j] != *tmp)
				break;

		}
		tmp++;
	}
	return (tmp);
}
