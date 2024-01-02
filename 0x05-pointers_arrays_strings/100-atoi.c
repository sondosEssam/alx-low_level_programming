/**
 * _atoi -Entry point
 *
 * Description: this function count length of string
 * @s: the string
 * Return: length
 */
#include"main.h"
int _atoi(char *s)
{
	int i = 1;
	int num = 0;
	int countneg = 0;
	int countpositve = 0;
	char *rev = s;

	while (*rev != 0)
		rev++;
	while (rev >= s)
	{
		if (*rev >= '0' && *rev <= '9')
		{
			num += (*(rev) - 48) * i;
			i *= 10;
		}
		else if (*rev == '+')
			countpositve++;
		else if (*rev == '-')
			countneg++;
		rev--;
	}
	if (countneg > countpositve)
	num *= -1;
	return (num);
}
