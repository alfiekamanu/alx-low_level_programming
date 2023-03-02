#include "main.h"
/**
 * *_strncpy - function that copies at string
 * @dest: variable one
 * @src: variable two
 * @n: increament in value to the nth value
 * Return: Succesful 0
 */
char *_strncpy(char *dest, char *src, int n)
{
	int a;

	a = 0;
	while (a < n && a != '\0')
	{
		dest[a] = src[a];
		a++;
	}
	while (a < n)
	{
		dest[a] = '\0';
		a++;
	}
	return (dest);
}

