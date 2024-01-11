/**
 * _sqrt_recursion - function that prints a string, followed by a new line
 * _divi - function
 * @n: string to be printed
 * @val: val
 * Return: int
*/
#include"main.h"
int _divi(int n, int val);
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (_divi(n, 1));
}
int _divi(int n, int val)
{
	if (n / val == val && n % val == 0)
		return (val);
	else if (n / val < val || (n / val == val && n % val != 0))
		return (-1);

	else
	return (_divi(n, val + 1));
}
