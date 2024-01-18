#include"main.h"
#include<stdlib.h>
#include<string.h>
/**
 * argstostr - function to create an array
 * @ac: size of the array
 * @av: string2
 * Return: pointeer
*/
char *argstostr(int ac, char **av)
{
	char *ptr = malloc(sizeof(char));
	char *tmp;
	int j = 0, pt = 0;
	int i = 0;

	if (ac == 0 || av == NULL)
		return (NULL);
	for (j = 0; j < ac; j++)
	{
		i += strlen(av[j]) + 1;
		tmp = av[j];
		ptr = realloc(ptr, sizeof(char) * i);
		if (ptr == NULL)
			return (NULL);
		while (*tmp != '\0')
		{
			ptr[pt] = *tmp;
			pt++;
			tmp++;
		}
		*(ptr + pt) = '\n';
		pt++;
	}
	ptr[pt] = '\0';
	return (ptr);
}
