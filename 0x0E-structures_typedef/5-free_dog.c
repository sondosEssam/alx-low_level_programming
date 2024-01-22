#include"dog.h"
#include <stdlib.h>
/**
* free_dog - struct
* @d: name
* Return: dog_t
*/
dog_t *free_dog(dog_t *d)
{
	if (d != NULL)
		free(d);
}
