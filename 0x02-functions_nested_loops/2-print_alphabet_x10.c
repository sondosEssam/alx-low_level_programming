/**
 * print_alphabet_x10 -Entry point
 *
 * Description: prints all alphabet ten times
 * Return: 0
 */
#include"main.h"
void print_alphabet_x10(void)
{
	char c;
	int a;

	for (a = 0; a < 10; a++)
	{
		for (c = 'a'; c <= 'z'; c++)
		{
			_putchar(c);
		}
		_putchar('\n');
	}
}
