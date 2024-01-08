/**
 * _strspn - Function to do tehe for loop job
 * @s: the dewsniation
 * @accept: the source
 * Return: charcter
*/
#include"main.h"
unsigned int _strspn(char *s, char *accept)
{
	int siz = 0;
	int i;
	int j;

	while (s[i] != '\0')
	{
		while (accept[j] != '\0')
		{
			siz++;

		}
		
	}

	return (siz);
}
