#include<stdio.h>
#include "main.h"
/**
 * print_most_numbers - Entry point
 * Return: Always 0 (Success)
*/
void print_most_numbers(void)
{
	char x;

	for (x = '0'; x <= '9'; x++)
	{
		if (x == '2')
		{
			continue;
		}
		else if (x == '4')
		{
			continue;
		}
		else
		{
			putchar(x);
		}
	}
	putchar('\n');
}
