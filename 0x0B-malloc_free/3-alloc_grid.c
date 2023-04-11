#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * alloc_grid - a pointer to a 2 dimensional array of integers
 * @width: ..
 * @height: ..
 *
 * Return: ..
 */

int **alloc_grid(int width, int height)
{ 
	int t, u, w, x;
	int **a;

	if (width <= 0 || height <= 0)
		return (NULL);

	a = malloc(sizeof(int *) * height);

	if (a == NULL)
	{
		free(a);
		return (NULL);
	}

	for (t = 0; t < height; t++)
	{
		a[t] = malloc(sizeof(int) * width);

		if (a[t] == NULL)
		{
			for (u = t; u >= 0; u--)
			{
				free(a[u]);
			}

			free(a);
			return (NULL);
		}
	}

	for (w = 0; w < height; w++)
	{
		for (x = 0; x < width; x++)
		{
			a[w][x] = 0;
		}
	}

	return (a);
}
	
	

