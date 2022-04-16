#include <stdio.h>
#include "dog.h"

/**
 * print_dog - print struct dog properties
 *
 * @d: pointer to struct dog
 */
 void print_dog(struct dog *d)
 {
	char *name = d->name;
	float age = d->age;
	char *owner = d->owner;

	if (name == NULL)
		name = "nil";
	if (owner == NULL)
		owner = "nil";

	printf("Name: %s\n", name);
	if (age == '\0')
		printf("Age: nil\n");
	else
		printf("Age: %f\n", age);
	printf("Owner: %s\n", owner);
 }
