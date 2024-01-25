#include<stdlib.h>
#include"variadic_functions.h"
#include<stdarg.h>
/**
 * sum_them_all - function
 * @n: args1
 * @...: arge2
 * Return: int
*/
int sum_them_all(const unsigned int n, ...)
{
	int i, x, sum = 0;
	va_list args;

	if (n == 0)
		return (0);
	va_start(args, n);
	for (i = 0; i < (int)n; i++)
	{
		x = va_arg(args, int);
		sum += x;
	}
	va_end(args);
	return (sum);
}
