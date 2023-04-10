#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * main -  adds positive numbers
 * @argc: argument count 
 * @argv: argument vector 
 * Return: Always 0
 */

int main(int argc, char *argv[])
{
	int t;
	unsigned int p, sum = 0;
	char *e;

	if (argc > 1)
	{
		for (t = 1; t < argc; t++)
		{
			e = argv[t];

			for (p = 0; p < strlen(e); p++)
			{
				if (e[p] < 48 || e[p] > 57)
				{
					printf("Error\n");
					return (1);
				}
			}

			sum += atoi(e);
			e++;
		}

		printf("%d\n", sum);
	}
	else
	{
		printf("0\n");
	}

	return (0);
}
 
