#include "dog.h"
#include <stddef.h>
#include <stdlib.h>

/**
 * cpy_str - copies a string
 * @cpy_str: pointer to new string
 * @or_str: string to be considered
 *
 * Return: pointer to str
 */

char *cpy_str(char *cpy_str, char *or_str)
{
	int i;
	int len = 0;

	if (or_str == NULL)
		return (NULL);
	for (i = 0; or_str[i] != '\0'; i++)
		len++;
	for (i = 0; i < len; i++)
		cpy_str[i] = or_str[i];
	cpy_str[i] = '\0';
	return (cpy_str);
}

/**
 * len_str - counts a string length
 * @str: the string to be considered
 *
 * Return: length of string, else 0
 */
int len_str(char *str)
{
	int i;
	int len;

	if (str == NULL)
		return (0);

	for (i = 0; str[i] != '\0'; i++)
		len++;
	return (len);
}

/**
 * new_dog - creates a new dog
 * @name: name of sog
 * @age: age of dog
 * @owner: name of owner
 *
 * Return: pointer to dog_t stucture
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *hond;
	int nmlen;
	int ownlen;

	nmlen = len_str(name);
	ownlen = len_str(owner);

	if (name == NULL || age < 0 || owner == NULL)
		return (NULL);

	hond = malloc(sizeof(dog_t));
	if (hond == NULL)
		return (NULL);

	hond->name = malloc((sizeof(char) * nmlen) + 1);
	if (hond->name == NULL)
	{
		free(hond);
		return (NULL);
	}

	hond->owner = malloc((sizeof(char) + ownlen) + 1);
	if (hond->owner == NULL)
	{
		free(hond);
		free(hond->name);
		return (NULL);
	}

	hond->age = age;
	cpy_str(hond->name, name);
	cpy_str(hond->owner, name);
	return (hond);
}


