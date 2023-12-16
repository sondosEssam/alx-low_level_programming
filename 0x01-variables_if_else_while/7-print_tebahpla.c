/**
 * main -Entry point of the program
 *
 * Description: prints all alphabets
 * Return: Always 0 (success)
 */
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
int main(void)
{
	char c;

	for (c = 'z'; c >= 'a'; c--)
	{
		putchar(c);
	}
	putchar('\n');
	return (0);
}
