#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
/**
 * sum_them_all - function that sums all of its parameters
 * Return: Always successful 0
 */
int sum_them_all(const unsigned int n, ...)
{
	int i;
	int sum;

	sum = 0;
	va_list ptr;

	va_start(ptr, n);

	if (n == 0)
	{
		return (0);
	}
	for (i = 0; i < n; i++)
		sum += va_arg(ptr, int);
	va_end(ptr);
	return (sum);
}
