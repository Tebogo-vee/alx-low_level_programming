#include "main.h"
#include <stdlib.h>

/**
 * array_range - creates an array of integers
 * @min: ...
 * @max: ...
 *
 * Return: the pointer to the newly created array
 */

int *array_range(int min, int max)
{
	int *a, t = 0;

	if (min > max)
		return (NULL);

	a = malloc((sizeof(int) * (max - min)) + sizeof(int));

	if (a == NULL)
		return (NULL);

	while (min <= max)
	{
		a[t] = min;
		t++;
		min++;
	}

	return (a);
}
