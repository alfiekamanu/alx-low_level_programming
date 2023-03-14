#include "main.h"
#include <stdlib.h>
/**
 * _strdup - Main Entry
 * @str: input
 * Return: 0
 */
char *_strdup(char *str)
{
	char *a;
	unsigned int len, i;

	/* check is str is null */
	if (str == NULL)
	{
		return (NULL);
	}

	len = 0;
	while (str[len] != '\0')
	{
		len++;
	}

	a = malloc(sizeof(char) * (len + 1));

	/*check if malloc was successful*/
	if (a == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < len; i++)
	{
		a[i] = str[i];
	}
	a[len] = '\0';
	return (a);
}
