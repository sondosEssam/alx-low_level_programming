#include "main.h"
#include <stdio.h>

/**
 * main - check the code
 *
 * Return: Always 0.
 */
void print_arr ( int *a , int n )
{
	int i  ; 
	for ( i =0 ; i< n ; i++)
		printf("%d, ", a[i]);
	putchar('\n');
}
int main(void)
{
	int a [] = { 1, 2,3,4,5,6,7,8,9,10};
	int n = sizeof(a)/sizeof(int);
	print_arr(a,n);
	reverse_array(a,n);
	print_arr(a,n);
    
    return (0);
}
