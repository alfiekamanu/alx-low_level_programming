#include "main.h"
/**
 * rot13 - function that encodes a string using rot 13
 * @s: string that should be encoded
 * Return: Successful 0
 */
char *rot13(char *)
{
	int a;
	int b;

	char datac[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char datarot[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyz";
	
	for (a = 0; s[a] != '\0' a++)
	{
		for (j = 0; j < 52; j++)
		{
			if (s[i] == data1[j])
			{
				s[i] = datarot[j];
				break;
			}
		}
	}
	return (s);
}
