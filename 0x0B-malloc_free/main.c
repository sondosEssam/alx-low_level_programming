#include <stdio.h>
#include <stdlib.h>
/**
 * _strdup - function to create an array
 * @str: size of the array
 * Return: pointeer
*/
char *_strdup(char *str)
{
	char *ptr;
	int i =0;

	if (str == NULL)
		return ('\0');
	while (str[i] != '\0')
		i++;
	ptr = malloc(i + 1);
	if (ptr == NULL)
		return ('\0');
	i = 0;
	while (str[i] != '\0')
	{
		ptr[i] = str[i];
		i++;
	}
	return (ptr);
}

/**
 * main - check the code for ALX School students.
 *
 * Return: Always 0.
 */
int main(void)
{
    char *s;

    s = _strdup("");
    if (s == NULL)
    {
        printf("failed to allocate memory\n");
        return (1);
    }
    printf("%s\n", s);
    free(s);
    return (0);
}
