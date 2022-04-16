#include <stdlib.h>
#include "dog.h"

/**
 * new_dog - creates a new dog using 'struct dog'
 *
 * @name: dog's name
 * @age: dogs's age
 * @owner: dogs's owner
 *
 * Return: struct of new dog or NULL if function fails
 */
dog_t *new_dog(char *name, float age, char *owner)
{

	dog_t *dog = malloc(sizeof(dog_t));

	if (dog == NULL)
		return (NULL);

	dog->name = name;
	dog->age = age;
	dog->owner = owner;

	return (dog);
}
