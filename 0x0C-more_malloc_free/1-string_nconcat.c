#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * string_nconcat - Concatenates two strings
 * @s1: ...
 * @s2: ...
 * @n: ...
 *
 * Return: NULL
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int t = 0, u = 0, w = 0, x = 0;
	char *str;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	while (s1[t])
		t++;

	while (s2[w])
		w++;

	if (n >= w)
		x = t + w;
	else
		x = t + n;

	str = malloc(sizeof(char) * x + 1);
	if (str == NULL)
		return (NULL);

	u = 0;
	while (u < x)
	{
		if (u <= t)
			str[u] = s1[u];

		if (u >= t)
		{
			str[u] = s2[w];
	            	w++;
		}
		u++;
	}
	str[t] = '\0';
	return (str);
}



