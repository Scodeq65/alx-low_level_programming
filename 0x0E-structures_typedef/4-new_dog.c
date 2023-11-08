#include <stdlib.h>
#include "dog.h"
/**
 * new_dog - new dog profile to be created
 * @name: name of the new dog
 * @age: the age of the new dog
 * @owner: the owner of the dog.
 *
 * Return: pointer to the new_dog
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	size_t d, o, g;
	dog_t *dog;

	if (name == NULL || owner == NULL)
		return (NULL);
	dog = malloc(sizeof(dog_t));
	if (dog == NULL)
	{
		free(dog);
		return (NULL);
	}
	for (d = 0; name[d] != '\0'; d++)
		;
	d++;
	dog->name = malloc(sizeof(char) * d);
	if (dog->name == NULL)
	{
		free(dog->name);
		free(dog);
		return (NULL);
	}
	for (g = 0; g < d; g++)
		dog->name[g] = name[g];
	dog->age = age;
	for (o = 0; owner[o] != '\0'; o++)
		;
	o++;
	dog->owner = malloc(sizeof(char) * o);
	if (dog->owner == NULL)
	{
		free(dog->owner);
		free(dog);
		return (NULL);
	}
	for (g = 0; g < o; g++)
		dog->owner[g] = owner[g];
	return (dog);
}
