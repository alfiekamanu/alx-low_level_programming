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
	int a, b, c;
	/* your code goes there */
	for (a = 0; a < 8; a++)
	{
		for (b = 0; b < 9; b++)
			for (c = 0; c < 10; c++)
			{
				putchar ((a % 8) + 0);
				putchar ((b % 9) + 0);
				putchar ((c % 10) + 0);
				if (a == 7 && b == 8 && c == 9)
					continue;
				putchar (',');
				putchar (' ');
			}
	}
	putchar ('\n');
	return (0);
}

