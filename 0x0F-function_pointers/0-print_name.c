#include "function_pointers.h"
#include <stdio.h>
#include <stddef.h>
/**
 * print_name - function that prints a name
 * @name: name of the person
 * @f: is pointer
 * Return: Always successful 0
*/

void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
	{
		return;
	}
	else
	{
		f(name);
	}
}
