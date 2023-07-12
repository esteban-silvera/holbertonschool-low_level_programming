#include <stdio.h>
#include "dog.h"
#include <stdlib.h>
char
*_strdup(char *str)
{
	int length, i;
	char *arr;

	if (str == NULL)
	{
		return (NULL);
	}

	length = 0;
	while (*(str + length) != '\0')
	{
		length++;
	}

	arr = (char*) malloc(length * sizeof(char) + 1);
	if (arr == NULL)
		return (NULL);

	for (i = 0; i < length; i++)
	{
		arr[i] = str[i];
	}
	arr[i] = '\0';

	return (arr);
}

dog_t
*new_dog(char *name, float age, char *owner)
{
	dog_t *doggo;
	char *doggo_name, *doggo_owner;

	doggo = malloc(sizeof(dog_t));
	if (!doggo)
	{
		return (NULL);
	}
	doggo_name = _strdup(name);
	if (!doggo_name)
	{
		free(doggo);
		return (NULL);
	}
	doggo_owner = _strdup(name);
	if (!doggo_owner)
	{
		free(doggo_name);
		free(doggo);
		return (NULL);
	}
	doggo->name = doggo_name;
	doggo->age = age;
	doggo->owner = doggo_owner;
	return(doggo);
}
