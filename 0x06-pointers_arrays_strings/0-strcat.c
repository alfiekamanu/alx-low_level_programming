#include "main.h"
#include <stdio.h>
#include <string.h>
/**
 * *_strcat - function that concatents two strings
 * @dest: variable that accepts another string
 * @src: variable that gets appended
 * Return: Always Successful
 */
char *_strcat(char *dest, char *src)
{
	int a;
	int b;

	a = 0;
	while (dest[a] != '\0')
	{
		a++;
	}
	b = 0;
	while (src[b] != '\0')
	{
		dest[a] = src[b];
		a++;
		b++;
	}
	dest[a] = '\0';
	return (dest);
}
