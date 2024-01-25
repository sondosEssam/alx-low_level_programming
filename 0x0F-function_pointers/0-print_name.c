#include<stdlib.h>
#include"function_pointers.h"
/**
 * print_name - fucntion
 * @name: arg1
 * @f: arg2
 * Return: void
*/
void print_name(char *name, void (*f)(char *))
{
	if (name == NULL)
		return;
	(f)(name);
}
