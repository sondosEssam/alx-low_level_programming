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
	unsigned long prev;
	unsigned long curr;
	int c;
	unsigned long next;

	prev = 1;
	curr = 2;
	printf("%ld", prev);
	printf(", %ld", curr);
	for (c = 1; c <= 96; c++)
	{
		next = curr + prev;
		printf(", %ld", next);
		prev = curr;
		curr = next;
	}
	putchar('\n');
	return (0);
}
