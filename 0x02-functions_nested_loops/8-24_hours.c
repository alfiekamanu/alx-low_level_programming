#include "main.h"
/**
 * jack_bauer - function that prints every minute of the day, 24 hour clock
 * j = hour, b = minutes
 * / 10 allows second digit to rotate
 * for loop breaks before passing 24:00
 *
 * Return: 24 hour clock line by line
 */
void jack_bauer(void)
{
	int j, b;
	
	for (j = 0; j < 24; j++)
	{
		for (b = 0; b < 60; b++)
		{
			_putchar ((j / 10) + '0');
			_putchar ((j % 10) + '0');
			_putchar (':');
			_putchar ((b / 10) + '0');
			_putchar ((b % 10) + '0');
			_putchar (' ');
			_putchar ('\n');
		}
	}
}
