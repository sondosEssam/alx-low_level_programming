/**
 * swap_int -Entry point
 *
 * Description: this function swaps two integers
 * @a: first num
 * @b: second num 
 * Return : (void)
 */
#include"main.h"
void swap_int(int *a, int *b)
{
	int tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}
