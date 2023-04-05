#include "main.h"
#include <stdio.h>

/**
 * _strspn - gets the length of a prefix substring
 * @s: input 
 * @accept: input
 * Return: the number of bytes in the initial segment of s
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int v, n, value, check;

	value = 0;

	for (v = 0; s[v] != '\0'; v++)
	{
		check = 0;

		for (n = 0; accept[n] != '\0'; n++)
		{
			if (accept[n] == s[v])
			{
				value++;
				check = 1;
			}
		}

		if (check == 0)
	}

	return (n);
}
