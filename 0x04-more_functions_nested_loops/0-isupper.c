/**
 * _isupper -Entry point
 * @c : charcter
 * Description: check if uper or no
 * Return: 0
 */
#include"main.h"
void _isupper(int c)
{
	if (c <= 90 && c >= 65)
		return (1);
	return (0);
}
