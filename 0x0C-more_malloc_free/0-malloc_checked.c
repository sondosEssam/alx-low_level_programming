/**
* malloc_checked - function
* @b: arg
* Return: pointer
*/
#include"main.h"
#include<stdlib.h>
#include<string.h>
void *malloc_checked(unsigned int b)
{
	void *ptr = malloc(b);

	if (ptr == NULL)
		exit(98);
	return (ptr);
}
