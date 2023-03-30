#include "main.h"

/**
 * print_number - Prints an integer.
 * @: The integer to be printed 
 * Return: 0
 */

void print_number(int n)

{
	unsigned int numb = n

	if (n < 0)
	{
	_putchar('-');
	numb = -n;
	}

	if ((numb / 10) > 0)
	{
	print_number(numb / 10);
	}
	_putchar((numb % 10) + '0');
}
