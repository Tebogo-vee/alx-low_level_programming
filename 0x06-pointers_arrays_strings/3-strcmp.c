#include "main.h"
#include <stdio.h>

/**
 * _strcmp - compares two strings
 * function should work exactly like strcmp
 * @s1: A pointer to the first string to be compared 
 * @s2: A pointer to the second string to be compared 
 * Return: s1 < s2
 */

int _strcmp(char *s1, char *s2)

{
	while (*s1 && *s2 && *s1 == *s2)
	{
	s1++;
	s2++;
	}
	return (*s1 - *s2);

}
