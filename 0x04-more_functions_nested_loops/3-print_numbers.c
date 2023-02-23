#include "main.h"
/**
 * print_numbers - function that prints numbers from 0 to 9
 *
 * Return: 0-9 followed by a new line
 */
void print_numbers(void)
{
	int a;
	/* main code goes down here*/
	for (a = 0; a < 10; a++)
	{
		_putchar(a);
		_putchar('\n');
	}
}
