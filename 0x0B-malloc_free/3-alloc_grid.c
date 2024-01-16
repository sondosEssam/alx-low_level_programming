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

	if (height == 0 && width == 0)
		return (NULL);
	if (ptr == NULL)
		return (NULL);
	for (i = 0; i < height; i++)
	{
		ptr[i] = malloc(sizeof(int) * width);
		if (ptr[i] == NULL)
		{
			for (j = 0; j < i; j++)
			{
				free(ptr[j]);
				free(ptr);
			}
			return (NULL);
		}
		for (j = 0; j < width; j++)
			ptr[i][j] = 0;
	}
	return (ptr);
}
