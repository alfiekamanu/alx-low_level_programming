#include "main.h"
/**
 * _strncat - function that concantenates two strings
 * @dest:variable to be concantenated with
 * @src: variable to be concantenated
 * @n: maximum value of variable
 * Return: Successful 0
 */
char *_strncat(char *dest, char *src, int n)
{
	int a;
	int b;

	a = 0;
	while (dest[a] != '\0')
	{
		a++;
	}
	b = 0;
	while (b < n && src[b] != '\0')
	{
		dest[a] = src[b];
		a++;
		b++;
	}
	dest[a] = '\0';
	return (dest);
}
