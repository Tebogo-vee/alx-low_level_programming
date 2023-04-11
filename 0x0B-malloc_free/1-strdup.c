#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _strdup - returns a pointer to a newly allocated space in memory
 * which contains a copy of the string given as a parameter
 * @str: the string to duplicate
 * Return: NULL if str = NULL
 */

char *_strdup(char *str)
{
	int q = 0, t = 1;
	char *s;

	if (str == NULL)
		return (NULL);

	while (str[t])
	{
		t++;
	}

	s = malloc((sizeof(char) * t) + 1);

	if (s == NULL) 
		return (NULL);

	while (q < t)
	{
		s[q] = str[q];
		q++;
	}

	s[q] = '\0';
	return (s);
}

