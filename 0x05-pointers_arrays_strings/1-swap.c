#include<stdio.h>
#include "main.h"
/**
 * swap_int - Entry point
 * @a: value being swapped
 * @b: value being swapped
 * Return: void
*/
void swap_int(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
