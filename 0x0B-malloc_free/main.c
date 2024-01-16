#include <stdio.h>
#include <stdlib.h>

/**
 * simple_print_buffer - prints buffer in hexa
 * @buffer: the address of memory to print
 * @size: the size of the memory to print
 *
 * Return: Nothing.
 */
#include"main.h"
#include<stdlib.h>
/**
 * create_array - function to create an array
 * @size: size of the array
 * @c: chars inside the array
 * Return: pointeer
*/
char *create_array(unsigned int size, char c)
{
	char *ptr;

	if (size == 0)
		return ('\0');
	ptr = malloc(sizeof(char) * size);
	while (--size)
		ptr[size] = c;
	*ptr = c;
	return (ptr);
}
void simple_print_buffer(char *buffer, unsigned int size)
{
    unsigned int i;

    i = 0;
    while (i < size)
    {
        if (i % 10)
        {
            printf(" ");
        }
        if (!(i % 10) && i)
        {
            printf("\n");
        }
        printf("0x%02x", buffer[i]);
        i++;
    }
    printf("\n");
}

/**
 * main - check the code for ALX School students.
 *
 * Return: Always 0.
 */
int main(void)
{
    char *buffer;

    buffer = create_array(98, 'H');
    if  (buffer == NULL)
    {
        printf("failed to allocate memory\n");
        return (1);
    }
    simple_print_buffer(buffer, 98);
    free(buffer);
    return (0);
}
