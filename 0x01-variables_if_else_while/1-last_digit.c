/**
 * main -Entry point of the program
 *
 * Description: This program retrn if last digit is less than 0 , less than 5 or 6and more
 * Return: Always 0 (success)
 */
#include <stdlib.h>
#include <stdio.h>
#include <time.h>
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	int s = n%10;

	if (s > 5)
		printf("Last digit of %d is %d and is greater than 5\n", n, s);
	else if (s == 0)
		printf("Last digit of %d is %d and is 0\n", n, s);
	else
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, s);
	return (0);
}
