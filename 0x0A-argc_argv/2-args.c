#include "main.h"
#include <stdio.h>

/**
 * main - Prints all arguments it receives
 * @argc: Argument count
 * @argv: Argument vector 
 * Return: Always 0
 */

int main (int argc, char *argv[])
{
	int t;

	for (t = 0; t < argc; t++)
	{
		printf("%s\n", argv[t]);
	}

	return (0);
}
