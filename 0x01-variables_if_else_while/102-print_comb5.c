#include <stdio.h>
/* more headers goes there */
/* betty style doc for function main goes there */
/**
 * main - Entry point
 *
 * Return:Always 0 (Success)
 */
/* betty style doc for function main goes there */
int main(void)
{
	int a, b;
	/* your code goes there */
	for (a = 0; a < 99; a++)
	{
		for (b = a + 1; b < 100; b++)
		{
			putchar ((a / 10) + 0);
			putchar ((a % 10) + 0);
			putchar (' ');
			putchar ((b / 10) + 0);
			putchar ((b % 10) + 0);
		}
		putchar (',');
		putchar (' ');
	}
	return (0);
}
