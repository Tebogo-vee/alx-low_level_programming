#include "main.h"
#include <stdio.h>

/**
 * _strchr - locates a character in a string
 * @s: input 
 * @c: input 
 * Return: a pointer to the first occurrence of the character c in the string s
 */

char *_strchr(char *s, char c)
{
	int v;

	for (v = 0; s[v] >= '\0'; v++)
	{ 
		if (s[v] == c)
			return(s + v);
	}

	return (NULL);

}
