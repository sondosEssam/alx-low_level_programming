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
	int c;
	char z;

	for (c = '0'; c <= '9'; c++)
	{
		putchar(c);
	}
	for (z = 'a'; z <= 'f'; z++)
	{
		putchar(z);
	}
	putchar('\n');
	return (0);
}
