#include "main.h"

/**
 * _memset - fills memory with a constant byte
 * @s: A pointer destination 
 * @b: The constant byte 
 * @n: Bytes 
 * Return: a pointer to the memory area s
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int v;

	for (v = 0; v < n; v++)
		s[v] = b;
	return (s);
}	

