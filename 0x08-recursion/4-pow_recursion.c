/**
 *  _pow_recursion - function that prints a string, followed by a new line
 * @x: string to be printed
 * @y: second num
 * Return: int
*/
#include"main.h"
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	if (y == 0)
		return (1);
	return (x * _pow_recursion(x, y - 1));
}
