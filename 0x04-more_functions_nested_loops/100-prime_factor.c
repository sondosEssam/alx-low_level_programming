#include <stdio.h>
#include <math.h>

/**
 * main - primeFact
 *
 * Return: Always 0.
 */
int main(void)
{
	long r;
	long max;
	long min;
	double square;

	r = 612852475143;
	square = sqrt(r);
	for (min = 3; min < square; min += 2)
	{
		if (r % min == 0)
			max = r / min;
	}
	printf("%ld\n", max);
	return (0);
}
