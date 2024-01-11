
#include"main.h"
/**
 * _divi - function
 * @n: string
 * @val: value
 * Return: int
 */
int _divi(int n, int val)
{
	if (n / val == val && n % val == 0)
		return (val);
	else if (n / val < val || (n / val == val && n % val != 0))
		return (-1);
	else
	return (_divi(n, val + 1));
}
/**
 * _sqrt_recursion - function that prints a string, followed by a new line
 * @n: string to be printed
 * Return: void
*/
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (_divi(n, 1));
}
