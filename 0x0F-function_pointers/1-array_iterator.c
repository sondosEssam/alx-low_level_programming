#include<stdlib.h>
#include"function_pointers.h"
/**
 * array_iterator - fucntion
 * @array: arg1
 * @size: arg2
 * @action: arg3
 * Return: void
*/
void array_iterator(int *array, size_t size, void (*action)(int))
{
	int i;

	for (i = 0; i < (int)size; i++)
		(*action)(array[i]);
}
