#include "dog.h"
#include <stdlib.h>
/**
*_strlen - returns length of
*a string
*@str: string to be counted
*Return: returns length of string
*/
int _strlen(char *str)
{
int len = 0;
while (str)
len++;

return (len);
}


/**
*_strcopy - copy string pointed by src
*into dest variable
*@dest:buffer storing string copy
*@src: buffer storing string to copy
*Return:returns copied string
*/
char *_strcopy(char *dest, char *src)
{
int index = 0;

for (; src[index] ; index++)
dest[index] = src[index];

dest[index] = '\0';
return (dest);
}




/**
*new_dog - creates a new dog
*@name: name of new dog
*@age: age of new dog
*@owner: owner of new dog
*Return: returns NULL in case
*of failure
*/
dog_t *new_dog(char *name, float age, char *owner)
{
dog_t *doga;

if (name == NULL || age < 0 || owner == NULL)
return (NULL);

doga = malloc(sizeof(dog_t));
if (doga == NULL)
return (NULL);

doga->name = malloc(sizeof(char) * (_strlen(name) + 1));
if (doga->name == NULL)
{
free(doga);
return (NULL);
}

doga->owner = malloc(sizeof(char) * (_strlen(owner) + 1));
if (doga->owner == NULL)
{
free(doga->name);
free(doga);
return (NULL);
}

doga->name = _strcopy(doga->name, name);
doga->age = age;
doga->owner = _strcopy(doga->owner, owner);

return (doga);
}
