#include "main.h"
/**
 * _strlen - returns the length of a string
 * @s: string 
 * Return: lenth
 */
int _strlen(char *s)
{
	int longe = 0;	

       while (*s != '\0')
       {
               longe++;
               s++;
       }

       return (longe);
}
