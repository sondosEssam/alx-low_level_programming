/**
 * _isalpha -Entry point
 * @c: -ArgumentChar
 * Description: Check if alpha or not
 * Return: 1 if alpha 0 if else
 */
#include"main.h"
int _isalpha(int c)
{
	int r;

	if (((c >= 97) && (c <= 122)) || ((c >= 65) && (c <= 90)))
		r = 1;
	else
		r = 0;
	return (r);
}
