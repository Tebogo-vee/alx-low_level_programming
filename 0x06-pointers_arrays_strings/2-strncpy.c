#include "main.h"
#include <stdio.h>

/**
 * _strncpy - copies a string
 * @dest: The buffer storing the string copy 
 * @src: The source string 
 * @n: The maximum number of bytes to be copied from src
 * Return: A pointer to the resulting string dest 
 */

char *_strncpy(char *dest, char *src, int n)

{

	int index = 0, src_tern = 0;

	while (src[index++])
	src_tern++;

	for (index = 0; src[index] && index < n; index++)
	dest[index] = src[index];

	for (index = src_tern; index < n; index++)
	dest[index] = '\0';

	return (dest);

}
