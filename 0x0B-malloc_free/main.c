//#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include"main.h"
#include<string.h>
/**
 * main - check the code for ALX School students.
 *
 * Return: Always 0.
 */
/*char *str_concat(char *s1, char *s2)
{
	char *ptr;
	int i = 0;
	int j = 0;
	int c1 = 0;

	if (s1 == NULL)
		c1 = 1;
	else if (s2 == NULL)
		c1 = 2;
	if (c1 != 1)
		i = strlen(s1);
	if (c1 != 2)
		i += strlen(s2);
	ptr = malloc(sizeof(char) * (i + 1));
	if (ptr == NULL)
		return ('\0');
	i = 0;
	while (s1 && s1[i] != '\0')
	{
		ptr[i] = s1[i];
		i++;
	}
	while (s2 && s2[j] != '\0')
	{
		ptr[i] = s2[j];
		i++;
		j++;
	}
	return (ptr);
}*/
int main(void)
{
    char *s;

    s = str_concat("Betty ", NULL);
    if (s == NULL)
    {
        printf("failed\n");
        return (1);
    }
    printf("%s\n", s);
    free(s);
    return (0);
}
