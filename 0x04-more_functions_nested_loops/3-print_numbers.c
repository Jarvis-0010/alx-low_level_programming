#include<stdio.h>
#include "main.h"
/**
 * print_numbers - Entry point
 * Return: Always 0 (Success)
*/
void print_numbers(void)
{
	int i;

	for (i = 48; i <= 57; i++)
	{
		putchar(i);
	}
	putchar('\n');
}
