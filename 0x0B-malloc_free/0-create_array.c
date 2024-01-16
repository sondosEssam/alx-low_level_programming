#include"main.h"
#include<stdlib.h>
/**
 * create_array - function to create an array
 * @size: size of the array
 * @c: chars inside the array
 * Return: pointeer
*/
char *create_array(unsigned int size, char c)
{
	char *ptr;
	int i = 0;

	if (size == 0)
		return ('\0');
	ptr = malloc(sizeof(char) * size);
	while (i < size)
	{
		ptr[i] = c;
		i++;
	}
	*ptr = c;
	return (ptr);
}
