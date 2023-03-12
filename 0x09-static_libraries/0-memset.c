#include "main.h"
/**
 * *_memset - a function that fills memory with a constant byte
 * @b: constant byte to be filled
 * @s: pointer to character b
 * @n: the maximum value
 * Return: Successful 0
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int a;

	for (a = 0; n > 0; a++, n--)
	{
		s[a] = b;
	}
	return (s);
}
