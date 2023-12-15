/**
 * main -Entry point of the program
 *
 * Description: prints all alphabets upper and lower V2
 * Return: Always 0 (success)
 */
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
int main(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
	{
		putchar(c);
	}
	for (c = 'A'; c <= 'Z'; c++)
	{
		putchar(c);
	}
	putchar('\n');
	return (0);
}
