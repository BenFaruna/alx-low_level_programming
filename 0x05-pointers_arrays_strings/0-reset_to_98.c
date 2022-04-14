#include "main.h"

/**
 * reset_to_98 - updates value outside the local scope
 *
 * @n: pointer to the variable being updated
 * Return: nothing
 */
void reset_to_98(int *n)
{
	*n = 98;
}
