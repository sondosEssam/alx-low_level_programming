/**
 * _isupper -Entry point
 * @c : charcter
 * Description: check if uper or no
 * Return: 0
 */
#include"main.h"
int _isupper(int c)
{
	int s;

	if (c <= 90 && c >= 65)
		s = 1;
	else
		s = 0;
	return (s);
}
