#include<stdio.h>
#include "main.h"
#include<string.h>
/**
 * puts2 - Entry point
 * @str: string being investigated
 * Return: void
*/
void puts2(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i += 2)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
