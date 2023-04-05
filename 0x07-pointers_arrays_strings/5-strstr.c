#include "main.h"
#include <stdio.h>

/**
 * _strstr - locates a substring
 * @haystack: input
 * @needle: input
 * Return: A pointer to the beginning of the located substring
 */

char *_strstr(char *haystack, char *needle)
{
	for (; *haystack != '\0'; haystack++)
	{
		char *first = haystack;
		char *second = needle;

		while (*first == *second && *second != '\0')
		{
			first++;
			second++;
		}
		if (*second == '\0')
			return (haystack);
	}

	return (NULL);
}
