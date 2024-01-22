#include"dog.h"
#include <stdlib.h>
/**
* new_dog - struct
* @name: name
* @age: age
* @owner: owner
* Return: dog_t
*/
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *ptr;

	ptr = malloc(sizeof(dog_t));
	if (ptr == NULL)
		return (NULL);
	ptr->name = name;
	ptr->age = age;
	ptr->owner = owner;
	return (ptr);
}