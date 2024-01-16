#include<stdlib.h>
#include<string.h>
/**
 * free_grid - function to create an array
 * @grid: size of the array
 * @height: string2
 * Return: pointeer
*/
void free_grid(int **grid, int height)
{
	int j;
	int *ptr;

	for (j = 0; j < height; j++)
	{
		ptr = grid[j];
		free(ptr);
		ptr = NULL;
	}
	free(grid);
	grid = NULL;

}
