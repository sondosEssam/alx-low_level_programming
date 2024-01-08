#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    char *s = "hello world";
    char *f = "helo";

        printf("%lu\n", strspn(s, f));
    
    return (0);
}
