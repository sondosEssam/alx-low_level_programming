#include<stdlib.h>
#include"variadic_functions.h"
#include<stdarg.h>
#include<stdio.h>
/**
 * print_numbers - function
 * @separator: arg
 * @n: arge2
 * @...: arg3
 * Return: ivoid
*/
void print_numbers(const char *separator, const unsigned int n, ...)
{
	int i, x;
	va_list args;

	if (n == 0)
	{
		printf("\n");
		return;
	}
	if (separator == NULL)
		separator = "";
	va_start(args, n);
	for (i = 0; i < (int)n; i++)
	{
		x = va_arg(args, int);
		printf("%d", x);
		if (i < (int)(n - 1))
		{
			printf("%s", separator);
		}
		else if (i == (int)(n - 1))
		printf("\n");
	}
	va_end(args);
}
