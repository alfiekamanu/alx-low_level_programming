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
	for (a = 0; a < 9; a++)
	{
		for (b = a + 1; b < 10; b++)
		{
			putchar ((a % 10) + '0');
			putchar ((b % 10) + '0');
			if (a == 8 && b == 9)
				continue;
			putchar (',');
			putchar (' ');
		}
	}
	putchar ('\n');
	return (0);
}


