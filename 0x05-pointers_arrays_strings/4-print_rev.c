#include "main.h"
/**
 * print_rev - function that prints a string in reverse
 * @s: pointer to the string to print
 */
void print_rev(char *s)
{
	int a;

	a = 0;
	for (a = 0; s[a] != '\0'; a--)
	{
		_putchar (s[a]);
	}
	_putchar ('\n');
}
