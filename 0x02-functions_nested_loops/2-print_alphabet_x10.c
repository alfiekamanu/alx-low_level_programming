/**
 * print_alphabet_x10 - a function that prints 10 times the alphabet
 *
 * Return: x10 a-z
 */
void print_alphabet_x10(void)
{
	int n;

	n = 0;

	while (n  < 10)
	{
		for (n = 'a'; n <= 'z'; n++)
		{
			_putchar(n);
		}
		n++;
		_putchar('\n');
	}
}
