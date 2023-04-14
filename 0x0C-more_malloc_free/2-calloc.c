#include "main.h"
#include <stdlib.h>

/** 
 * _calloc - allocates memory for an array, using malloc
 * @nmemb: ...
 * @size: ...
 *
 * Returns: ...
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	int t = 0, x = 0;
	char *s;

	if (nmemb == 0 || size == 0)
		return (NULL);

	x = nmemb * size;
	s = malloc(x);

	if (s == NULL)
		return (NULL);

	while (t < x)
	{
		s[t] = 0;
		t++;
	}

	return (s);
}
