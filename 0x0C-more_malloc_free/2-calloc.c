/**
* _calloc - function
* @nmemb: arg
* @size: arg2
* Return: pointer
*/
#include"main.h"
#include<stdlib.h>
#include<string.h>
void *_calloc(unsigned int nmemb, unsigned int size)
{
	size_t total_size = nmemb * size;
	void *allocated_memory = malloc(total_size);

	if (allocated_memory != NULL)
	{
		memset(allocated_memory, 0, total_size);
	}
	return (allocated_memory);
}
