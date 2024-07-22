#include "dog.h"

/**
 * new_dog - creates a new dog.
 * @name: dog's name
 * @age: dog's age
 * @owner: dog's owner
 *
 * Return: (newDog) which is new struct of dog_t
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *newDog;
	int i, j;

	newDog = (dog_t *) malloc(sizeof(dog_t));
	if (newDog == NULL)
		return (NULL);

	for (i = 0; name[i] != '\0'; i++)
	{};
	i += 1;
	newDog->name = (char *)malloc(sizeof(char) * i);
	if (newDog->name == NULL)
	{
		free(newDog);
		return (NULL);
	}
	for (j = 0; j < i; j++)
	{
		newDog->name[j] = name[j];
	}
	for (i = 0; owner[i] != '\0'; i++)
	{};
	i += 1;
	newDog->owner = (char *)malloc(sizeof(char) * i);
	if (newDog->owner == NULL)
	{
		free(newDog->name);
		free(newDog);
		return (NULL);
	}
	for (j = 0; j < i; j++)
	{
		newDog->owner[j] = owner[j];
	}
	newDog->age = age;
	return (newDog);
}
