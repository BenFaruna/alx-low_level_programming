#include <stdlib.h>
#include "dog.h"

/**
 * free_dog - free dog memory space
 *
 * @d: struct of typedef dog_t
 */
void free_dog(dog_t *d)
{
	if (d == NULL)
		return;

	free(d);
}
