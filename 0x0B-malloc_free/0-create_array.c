#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * create_array -  creates an array of chars, and initializes it with a specific char
 * @size: The size of the array
 * @c: The char to fill in the array
 * Return: NULL if size = 0
 */

char *create_array(unsigned int size, char c)
{
	unsigned int t;
	char *s;

	if (size == 0)
		return (NULL);

	s = malloc(size * sizeof(char));

	if (s == NULL)
		return (NULL);

	for (t = 0; t < size; t++)
	{
		s[t] = c;
	}

	return (s);
}

