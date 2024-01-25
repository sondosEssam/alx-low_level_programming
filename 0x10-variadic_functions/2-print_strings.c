#include<stdlib.h>
#include"variadic_functions.h"
#include<stdarg.h>
#include<stdio.h>
/**
 * print_strings - function
 * @separator: arg
 * @n: arge2
 * @...: arg3
 * Return: ivoid
*/
void print_strings(const char *separator, const unsigned int n, ...)
{
	int i;
	char *x;
	va_list args;

	if (n == 0)
		return;
	if (separator == NULL)
		separator = "";
	va_start(args, n);
	for (i = 0; i < (int)n; i++)
	{
		x = va_arg(args, char*);
		if (x == NULL)
			x = "(nil)";
		printf("%s", x);
		if (i < (int)(n - 1))
		{
			printf("%s", separator);
		}
		else
		printf("\n");
	}
	va_end(args);
}
