#include <stdio.h>
/**
 * main - function that prints arguments passed
 * @argc: Number of command line arguments
 * @argv: Array name
 * Return: 0 successful
 */
int main(int argc, char *argv[])
{
	if (argc == 2)
	{
		printf("The number of arguments supplied is %s\n", argv[1]);
	}
	else if (argc > 2)
	{
		printf("Too many arguments supplied.\n");
	}
	else
	{
		printf("Atleast one argument is expected. \n");
	}
	return (0);
}
