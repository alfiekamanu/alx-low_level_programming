#include "main.h"
/**
 *_strlen - function that prints the length of a string
 * @s: string to evaluate
 * Return: length of string
 */
int _strlen(char *s)
{
	int a;

	a = 0;
	while (s[a] != '\0')
	{
		a++;
	}
	return (a);
}
