/**
 * main -Entry point
 *
 * Description: prints all alphabet
 * Return: 0
 */
#include"main.h"
#include<stdio.h>
int main(void)
{
	long prev;
	long curr;
	int c;
	long next;

	prev = 1;
	curr = 2;
	printf("%ld", prev);
	printf(", %ld", curr);
	for (c = 1; c <= 48; c++)
	{
		next = curr + prev;
		printf(", %ld", next);
		prev = curr;
		curr = next;
	}
	putchar('\n');
	return (0);
}
