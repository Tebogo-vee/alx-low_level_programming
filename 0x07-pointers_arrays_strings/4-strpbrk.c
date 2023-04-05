#include "main.h"
#include <stdio.h>

/**
 * _strpbrk - searches a string for any of a set of bytes
 * @s: input 
 * @accept: input
 * Return: a pointer to the byte in s that matches one of the bytes in accept
 */

char *_strpbrk(char *s, char *accept)

{
	int v, n;
	
	for (v = 0; s[v] != '\0'; v++)
	{ 
		for (n = 0; accept[n] != '\0'; n++)
		{
			if (s[v] == accept[n])
				return (s + v);
		}
	}

	return (NULL);
}
