/**
 * _isdigit -Entry point
 * @c : charcter
 * Description: check if uper or no
 * Return: 0
 */
#include"main.h"
int _isdigit(int c)
{
	int s;

	if (c <= 57 && c >= 48)
		s = 1;
	else
		s = 0;
	return (s);
}
