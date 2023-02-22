#include "main.h"
/**
 * print_to_98 - a function that prints all natural numbers from n to 98
 * user input's number prints to 98, regardless < 98 or > 98
 * @n: number input
 * Return: Always 0 (Success)
 */
void print_to_98(int n)
{
	for (n = 0; n < 98; n++)
	{
		_putchar (n);
		_putchar (',');
		_putchar (' ');
	}
	Return (0);
}
