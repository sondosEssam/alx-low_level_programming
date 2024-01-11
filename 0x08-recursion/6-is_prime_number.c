
#include"main.h"
/**
 * _divii - function
 * @n: string
 * @val: value
 * Return: int
 */
int _divii(int n, int val)
{
	if (n % val == 0)
		return (0);
	else if (val >= n / 2)
		return (1);

	else
	return (_divii(n, val + 1));
}
/**
 * is_prime_number - function that prints a string, followed by a new line
 * @n: string to be printed
 * Return: void
*/
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (_divii(n, 2));
}
