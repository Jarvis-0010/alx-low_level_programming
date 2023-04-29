#include<stdio.h>
#include "main.h"
/**
 * print_triangle - Entry point
 * @size: value being tested
 * Return: Always 0 (Success)
*/
void print_triangle(int size)
{
	if (size > 0)
	{
		int i, j, k;

		for (i = 0; i < size; i++)
		{
			for (j = 0; j < size - i; j++)
			{
				_putchar(' ');
			}
			for (k = 0; k <= i; k++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}
}
