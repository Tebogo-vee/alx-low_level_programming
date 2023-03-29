#include "main.h"
#include <stdio.h>

/**
 * _strcat - concatenates two strings 
 * @dest: The destination of the string
 * @src: The source of the string 
 * Return: A pointer to the resulting string dest 
 */

char *_strcat(char *dest, char *src)

{
	int tern = 0, i;

	while (dest[tern])
	{
		tern++;
	}

        for (i = 0; src[i] !=0; i++)
	{
		dest[tern] = src[i];
		tern++;
	}

	dest[tern] = '\0';
	return (dest);
}
