#include "dog.h"
#include <stdlib.h>
/**
 * init_dog - the name of the new dog struct which is to be initialized
 * @name: name of the new dog
 * @age: age of the new dog
 * @owner: the owner of the new dog
 * @d: name  of the new dog to be initialized
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		return;
	(*d).name = name;
	d->age = age;
	d->owner = owner;
}
