#include<stdio.h>
#include<stdlib.h>
#include"main.h"
/**
 * str_concat - function to create an array
 * @s1: size of the array
 * @s2: string2
 * Return: pointeer
*/


int main(void)
{
    char *s;

    s = str_concat(NULL , "hello");
    if (s == NULL)
    {
        printf("failed\n");
        return (1);
    }
    printf("%s\n", s);
    free(s);
    return (0);
}
