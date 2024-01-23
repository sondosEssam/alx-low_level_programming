/**
* malloc_checked - function
* @b: arg
* Return: pointer
*/
#include"main.h"
void *malloc_checked(unsigned int b)
{
	int *ptr = malloc(b);

	if (ptr == NULL)
		exit(98);
	return (ptr);
}
