#include <stdio.h>
#include "dog.h"
/**
* init_dog -  initialize a variable of type struct dog
* @name: name to initialize
* @age: age to initialize
* @owner: owner to initialize
*/
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	struct dog *d

//	d = malloc(sizeof(struct dog));
	if (d == NULL)

	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
