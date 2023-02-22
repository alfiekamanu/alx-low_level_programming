#include "main.h"
/**
 * Jack Bauer - function that prints every minute of the day
 *
 * Return: Always Successful (0)
 */
void jack_bauer(void)
{
	int j, b;
	
	for (j = 0; j < 24; j++)
	{
		for (b = 0; b < 60; b++)
		{
			_putchar ((j / 10) + 0);
			_putchar ((j % 10) + 0);
			_putchar (':');
			_putchar ((b / 10) + 0);
			_putchar ((b % 10) + 0);
			_putchar (' ');
			_putchar ('\n');
		}
	}
	return (0);
}
