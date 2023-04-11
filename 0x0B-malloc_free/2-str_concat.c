#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * str_concat - concatenates two strings
 * @s1: First srting to concatenate
 * @s2: Second string to concatenate
 *
 * Return: Two strings concatenated
 */

char *str_concat(char *s1, char *s2)
{
	int t = 0, u = 0, w = 0, x = 0;
	char *s;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	while (s1[t])
		t++;

	while (s2[u])
		u++;

        x = t + u;
	s = malloc((sizeof(char) * x) + 1);

	if (s == NULL)
		return (NULL);

	w = 0;

	while (u < t)
	{
		if (u <= t)
			s[u] = s1[u];

		if (u >= t)
		{ 
			s[u] = s2[w];
			w++;
		}

		u++;
	}

	s[u] = '\0';
	return (s);
}
