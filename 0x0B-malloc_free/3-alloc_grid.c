#include"main.h"
#include<stdlib.h>
#include<string.h>
/**
 * alloc_grid - function to create an array
 * @width: size of the array
 * @height: string2
 * Return: pointeer
*/
int **alloc_grid(int width, int height)
{
	int i;
	int j;
	int **ptr = malloc(sizeof(int *) * height);

	if (ptr == NULL)
		return (NULL);
	for (i = 0; i < height; i++)
	{
		ptr[i] = malloc(sizeof(int) * width);
		if (ptr[i] == NULL)
			return (NULL);
		for (j = 0; j < width; j++)
			ptr[i][j] = 0;
	}
	return (ptr);
}
