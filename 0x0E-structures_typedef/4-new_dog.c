#include "dog.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h> 
/**
* new_dog - new cute dog.
*
*@name: name of dog.
*@age: age of dog.
*@owner: owner of dog.
* Return: Always 0.
*/
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *x;
	x = malloc(sizeof(dog_t));
	
	if (x == NULL)
		return (NULL);

	x->name = strdup(name);
	x->age = age;
	x->owner = strdup(owner);

	return (x);
}

