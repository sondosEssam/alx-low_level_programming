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
	long sum;

	prev = 1;
	curr = 2;
	sum = 2;
	for (c = 1; c <= 48; c++)
	{
		next = curr + prev;
		if (next % 2 == 0)
			sum += next;
		prev = curr;
		curr = next;
		if (curr >= 4000000)
			break;

	}
	printf("%ld\n", sum);
	return (0);
}
