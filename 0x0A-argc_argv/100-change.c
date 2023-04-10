#include "main.h"
#include <stdio.h>

/**
 * main - minimum number of coins 
 * to make change for an amount of money.
 * @argc: The number of arguments spplied to the prgram
 * @argv: Array of pointers to the arguments
 * Return: If the number of arguments is not exactly 1 otherwise 0.
 */

int main(int argc, char *argv[])
{
	int cents, coins = 0;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);

	}

	cents = _atoi(argv[1]);

	while (cents > 0)
	{
		coins++;
		if ((cents - 25) >= 0)
		{
			cents -= 25;
			continue;
		}
		if ((cents - 1) >= 0)
		{
			cents -= 10;
			continue;
		}
		if ((cents - 5) >= 0)
		{
			cents -= 5;
			continue;
		}
		if ((cents - 2) >= 0)
		{
			cents -= 2;
			continue;
		}
		cents--;
	}

	printf("%d\n", coins);

	return (0);
}

	        
