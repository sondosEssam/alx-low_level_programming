#include"main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_grid - prints a grid of integers
 * @grid: the address of the two dimensional grid
 * @width: width of the grid
 * @height: height of the grid
 *
 * Return: Nothing.
 */

/**
 * alloc_grid - function to create an array
 * @width: size of the array
 * @height: string2
 * Return: pointeer
*/
/*
int **alloc_grid(int width, int height)
{
	int i;
	int j;
	int **ptr = malloc(sizeof(int) * width * height);

	if (ptr == NULL)
		return (NULL);
	for (i = 0; i < height; i++)
		for(j = 0; j < width; j++)
			ptr[i][j] = 0;
	
	return (ptr);
}
*/

void print_grid(int **grid, int width, int height)
{
    int w;
    int h;

    h = 0;
    while (h < height)
    {
        w = 0;
        while (w < width)
        {
            printf("%d ", grid[h][w]);
            w++;
        }
        printf("\n");
        h++;
    }   
}

/**
 * main - check the code for ALX School students.
 *
 * Return: Always 0.
 */
int main(void)
{
    int **grid;

    grid = alloc_grid(6, 4);
    if (grid == NULL)
    {
        return (1);
    }
    print_grid(grid, 6, 4);
    printf("\n");
    grid[0][3] = 98;
    grid[3][4] = 402;
    print_grid(grid, 6, 4);
    return (0);
}
