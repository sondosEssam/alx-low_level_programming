/**
 * rev_string -Entry point
 *
 * Description: this function output the  string
 * @s: the string
 * Return: void
 */
#include"main.h"
void rev_string(char *s)
{
	char *rev = s;
	char tmp;
	int i = 0;

	while (*rev != 0)
		rev++;
	while (rev > (s + i))
	{
		rev--;
		tmp = *rev;
		*rev = *(s + i);
		*(s + i) = tmp;
		i++;
	}
	_putchar('\n');
}
