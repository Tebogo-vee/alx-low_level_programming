#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * malloc_checked - Allocates memory using malloc
 * @b: Size to allocate
 *
 * Return: Apointer to the allocated memory
 */

void *malloc_checked(unsigned int b)
{
	void *w;

	w = malloc(b);

	if (w == NULL)
		exit(98);

	return (w);
}
