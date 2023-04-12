#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * argstostr - concatenates all the arguments of your program
 * @ac: Argument count
 * @av: Argument vector
 * Return: NULL if ac == 0 or av == NULL
 */

char *argstostr(int ac, char **av)
{
	int ch = 0, t = 0, u = 0, w = 0;
	char *s;

	if (ac == 0 || av == NULL)
		return (NULL);

	while (t < ac)
	{
		while (av[t][u])
		{
			ch++;
			u++;
		}

		u = 0;
		t++;
	}

	s = malloc((sizeof(char) * ch) + ac + 1);

	t = 0;
	while (av[t])
	{
		while (av[t][u])
		{
			s[w] = av[t][u];
			w++;
			u++;
		}

		s[w] = '\n';

		u = 0;
		w++;
		t++;
	}

	w++;
	s[w] = '\n';
	return (s);
}

