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
	unsigned long int prev;
	unsigned long int curr;
	int c;
	unsigned long next;

	prev = 1;
	curr = 2;
	printf("%lu", prev);
	printf(", %lu", curr);
	for (c = 1; c <= 96; c++)
	{
		printf(", %lu", curr + prev);
		next = curr + prev;
		prev = curr;
		curr = next;
	}
	putchar('\n');
	return (0);
}
