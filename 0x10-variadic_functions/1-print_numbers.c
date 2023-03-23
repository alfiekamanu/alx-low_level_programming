#include "variadic_functions.h"
#include <stadarg.h>
#include <stdio.h>
/**
 * print_numbers - function that prints numbers followed by a new line
 * Return: Always successful 0
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list numbers;
	unsigned int i;
	sum = 0;

	if(separator == NULL || *separator == 0)
	{
		separator = "";
	}
	va_start(numbers, n);
	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(numbers, int));
		if (n == i + 1)
		{
			break;
		}
		printf("%s", separator);
	}
	printf("\n");
	va_end(numbers);
}
