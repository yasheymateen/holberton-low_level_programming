#include <stdio.h>
#include <stdlib.h>
#include "dog.h"
/**
 * new_dog - This function creates a new dog
 * @name: dog name
 * @age: dog age
 * @owner: dog's owner
 * Return: new dog information
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	int name_len, own_len, i;
	dog_t *new;

	new = malloc(sizeof(dog_t));
	if (new == NULL)
		return (NULL);
	for (name_len = 0; name[name_len] != '\0'; name_len++)
		;
	for (own_len = 0; owner[own_len] != '\0'; own_len++)
		;
	new->name = malloc(sizeof(char) * (name_len + 1));
	if (new->name == NULL)
	{
		free(new);
		return (NULL);
	}
	new->owner = malloc(sizeof(char) * (own_len + 1));
	if (new->owner == NULL)
	{
		free(new->name);
		free(new);
		return (NULL);
	}
	for (i = 0; i <= name_len; i++)
		new->name[i] = name[i];
	new->age = age;
	for (i = 0; i <= own_len; i++)
		new->owner[i] = owner[i];
	return (new);
}
