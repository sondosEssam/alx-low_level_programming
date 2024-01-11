#include "main.h"
#include <stdio.h>
/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
     int r;

    r = is_palindrome("level");
    printf("\n%d\n", r);
    r = is_palindrome("redder");
    printf("\n%d\n", r);
    r = is_palindrome("test");
    printf("\n%d\n", r);
    r = is_palindrome("step on no pets");
    printf("\n%d\n", r);
    return (0);
}
