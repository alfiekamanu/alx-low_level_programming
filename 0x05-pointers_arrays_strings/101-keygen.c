#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include "main.h"
int password(int password_length)
{
	char list[] = "1234567890qwertyuiopasdfghjklzxcvbnm!@#$%^&*()_- +=QWERTYUIOPA";
	printf(" \t ");
	
	for(int i = 0; i < password_length; i++)
	{
		printf(" * ");
	}
	printf(" \n ");
	printf(" \t ");
	srand(time(NULL));
	for (int i = 0; i < password_length; i++)
	{
		printf("% c " , list[rand() % (sizeof list - 1)]);
	}
	printf(" \n ");
	printf(" \t ");
	for (int i = 0; i < password_length; i++)
	{
		printf(" * ");
	}
	printf(" \n ");
}
int main(void)
{
	int password_length;
	/* user instructions */
	printf(" \n \t Enter length of the password = ");
	scanf(" % d ", &password_length);
	printf(" \n ");
	printf(" \n ");
	password(password_length);
	return (0);
}
