#include "main.h"
#include <unistd.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char puc = "_putchar";

	while (puc)
	{
		_putchar(puc);
		puc++;
	}
	_putchar('\n');

	return (0);
}
