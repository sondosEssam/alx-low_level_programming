#include"dog.h"
#include <stdlib.h>
#include <string.h>
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
	ptr->name = malloc(strlen(name) + 1);
	if (ptr->name == NULL)
	{
		free(ptr);
		return (NULL);
	}
	strcpy(ptr->name, name);
	ptr->owner = malloc(strlen(owner) + 1);
	if (ptr->owner == NULL)
	{
		free(ptr->name);
		free(ptr);
		return (NULL);
	}
	strcpy(ptr->owner, owner);
	ptr->age = age;
	return (ptr);
}
