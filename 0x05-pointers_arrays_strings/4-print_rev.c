#include<stdio.h>
#include "main.h"
#include<string.h>
/**
 * print_rev - Entry point
 * @s - string being printed
 * REturn: void
*/
void print_rev(char *s)
{
	int len = 0;
	int i;
	/**len = strlen(s);*/

	while (*s != '\0')
	{
		len++;
		s++;
	}

	for (i = len; i >= 0; i--)
	{
		_putchar(*s);
		s--;
	}
	_putchar('\n');
}
