#include <stdlib.h>
#include "dog.h"

/**
* _strlen - returns the length of a string
* @s: string to evaluate
* Return: string length
*/

int _strlen(char *s)
{
	int n;

	n = 0;

	while (s[n] != '\0')
	{
		n++;
	}
	return (n);
}

/**
* *_strcpy - function that copies a string including the nully terminating byte
* @src: source of the string to be copied
* @dest: destination for the copied string
* Return: pointer to dest
*/

char *_strcpy(char *dest, char *src)
{
	int len, n;

	len = 0;

	while (src[len] != '\0')
	{
		len++;
	}

	for (n = 0; n < len; n++)
	{
		dest[n] = src[n];
	}
	dest[n] = '\0';
	return (dest);
}
/**
* new_dog - a function that creates a new dog
* @name: dog name
* @age: dog age
* @owner: dog owner
* Return: pointer to the new dog (Success), NULL otherwise
*/

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog;
	int len1, len2;

	len1 = _strlen(name);

	len2 = _strlen(owner);

	dog = malloc(sizeof(dog_t));
	if (dog == NULL)
		return (NULL);

	dog->name = malloc(sizeof(char) * (len1 + 1));
	if (dog->name == NULL)
	{
		free(dog);
		return (NULL);
	}
	dog->owner = malloc(sizeof(char) * (len2 + 1));
	if (dog->owner == NULL)
	{
		free(dog);
		free(dog->name);
		return (NULL);
	}
	_strcpy(dog->name, name);
	_strcpy(dog->owner, owner);
	dog->age = age;
	return (dog);
}
