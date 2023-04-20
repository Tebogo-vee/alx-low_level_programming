#include "dog.h"
#include <stdlib.h>

int _strlen(char *s);
char *_strcpy(char *dest, char *src);

/**
 * _strlen - returns the length of a string 
 * @s: string to evaluate 
 *
 * Return: the lenth of the string
 */
int _strlen(char *s)
{
	int c = 0;

	for (; *s != '\0'; s++)
	{
		c++;
	}

	return (c);
}

/**
 * *_strcpy - copies the string pointed to by src
 * including the termination null byte (\0)
 * to the buffer pointed to by dest 
 * @dest: pointer to the buffer in which we copy the string
 * @src: string to be copied 
 *
 * Retun: the pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}
	dest[i++] = '\0';

	return (dest);
}

/**
 * new_dog - creates a new dog 
 * @name: name of the dog
 * @age: age of the dog
 * @owner: owner of the dog
 *
 * Return: pointer to the new dog (Success), NULL otherwise 
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *lex_dog;
	int name_l = 0, own_l = 0;

	if (name != NULL && owner != NULL)
	{
		name_l = _strlen(name) + 1;
		own_l = _strlen(owner) + 1;
		lex_dog = malloc(sizeof(dog_t));

		if (lex_dog == NULL)
			return (NULL);

		lex_dog->name = malloc(sizeof(char) * name_l);

		if (lex_dog->name == NULL)
		{
			free(lex_dog);
			return (NULL);
		}

		lex_dog->owner = malloc(sizeof(char) * own_l);

		if (lex_dog->owner == NULL)
		{
			free(lex_dog->name);
			free(lex_dog);
			return (NULL);

		}

		lex_dog->name = _strcpy(lex_dog->name, name);
		lex_dog->owner = _strcpy(lex_dog->owner, owner);
		lex_dog->age = age;
	}

		return (lex_dog);
}
