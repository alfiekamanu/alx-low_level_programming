#include "main.h"
#include <stdlib.h>
/**
 * *create_array - function that creates arrays of characters
 * @c: variable one
 * @b: variable two
 * Return: Null if size = 0
 */
char *create_array(unsigned int size, char c)
{
	char *ptr, b;

	ptr = malloc(sizeof(char) * size);
	if (ptr == NULL)
		return (NULL);
	for (b = 0; b < size; ++)
		ptr[b] = c;
	return (ptr);
}

