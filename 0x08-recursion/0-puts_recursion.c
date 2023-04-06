#include "main.h"

/**
 * _puts_recursion - Prints a string 
 * followed by a new line
 * Return: Always 0.
 */
void _puts_recursion(char *s)
{
	_putchar('\n');
    _puts_recursion(s);
    return ;
}
