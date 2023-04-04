#include "main.h"

/**
 * _memcpy - copies memory area
 * @dest: input
 * @src: copies n bytes from memory 
 * @n: bytes
 * Return:  a pointer to dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int v;

	for (v = 0; v < n; v++)
		dest[v] = src[v];

	return (dest);
}
