#include "main.h"
/**
 * *_memset - a function that fills memory with a constant byte
 * @b: constant byte to be filled
 * @s: pointer to character b
 * Return: Successful 0
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int a;

	for (a = 0; a < n; a++)
	{
		s[a] = b;
	}
	return (s);
}
