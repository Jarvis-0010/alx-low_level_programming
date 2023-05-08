#include<stdio.h>
#include "main.h"
/**
 * print_diagsums - Entry point
 * @a: pointer
 * @size: variable
 * Return: void
*/
void print_diagsums(int *a, int size)
{
	int i;
	int firstSum = 0;
	int secondSum = 0;

	for (i = 0; i < size; i++)
	{
		firstSum += a[i * size + i];
		secondSum += *(a + i * size + size - i -1);
	}
	printf("%d,%d\n", firstSum, secondSum);
}
