/**
 * _islower -Entry point
 * @c: -ArgumentChar
 * Description: Check if lower or higher
 * Return: 1 if loweralpha 0 if else
 */
#include"main.h"
int _islower(int c)
{
	int r;

	if ((c >= 97) && (c <= 122))
		r = 1;
	else
		r = 0;
	return (r);
}
