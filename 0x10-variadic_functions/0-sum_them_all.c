#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
/**
 * sum_them_all - function that sums all of its parameters
 * Return: Always successful 0
 */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int i;
	int sum;

	sum = 0;
	va_list valist;

	va_start(valist, n);

	if (n == 0)
	{
		return (0);
	}
	for (i = 0; i < n; i++)
		sum += va_arg(valist, int);
	va_end(valist);
	return (sum);
}
