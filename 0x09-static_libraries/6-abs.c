/**
 * _abs -Entry point
 * @n: -ArgumentChar
 * Description: Check if lower or higher
 * Return: 1 if loweralpha 0 if else
 */
#include"main.h"
int _abs(int n)
{
	if (n < 0)
		n = n * (-1);
	return (n);
}
