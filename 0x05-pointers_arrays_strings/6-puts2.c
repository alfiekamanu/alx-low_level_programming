#include "main.h"
/**
 * puts2 - function that prints every other character of a string
 * @str: the variable to be printed
 */
void puts2(char *str)
{
	int a, b;

	a = 0;

	while (str[a] != '\0')
	{
		a++;
	}

	for (b = 0; b < a; a += 2)
	{
		_putchar(str[a]);
	}

	_putchar('\n');
}
