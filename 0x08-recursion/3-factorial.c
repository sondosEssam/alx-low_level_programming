/**
 * factorial - function that prints a string, followed by a new line
 * @n: string to be printed
 * Return: int
*/
#include"main.h"
int factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0)
		return (1);
	return (n * factorial(n - 1));
}
