/**
 * main - check the code
 * Description: natural is natural
 * Return: Always 0.
 */
#include<stdio.h>
int main(void)
{
	int num;
	long sum;

	sum = 0;
	for (num = 3; num < 1024 ; num++)
	{
		if (num % 3 == 0 || num % 5 == 0)
			sum += num;
	}
	printf("%ld\n", sum);
	return (0);
}
