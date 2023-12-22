#include <stdio.h>

/**
 * main - Fizz-Buzz
 *
 * Return: Always 0.
 */
int main(void)
{
	int l;

	for (l = 1; l <= 100; l++)
	{
		if (l % 3 == 0 && l % 5 != 0)
			printf("Fizz ");
		else if (l % 5 == 0 && l % 3 != 0)
			printf("Buzz ");
		else if (l % 5 == 0 && l % 3 == 0)
			printf("FizzBuzz ");
		else
			printf("%d ", l);
	}

    return (0);
}
