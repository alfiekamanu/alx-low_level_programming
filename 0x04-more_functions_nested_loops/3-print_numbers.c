#include "main.h"
/**
 * print_numbers - function that prints numbers from 0 to 9
 *
 * Return: 0-9 followed by a new line
 */
void print_numbers(void)
{
	int c;
	/* main code goes down here*/
	for (c = 0; c < 10; c++)
	{
		_putchar(c + '0');
		_putchar('\n');
	}
}
