#include "main.h"
#include<stdio.h>
/**
 * reverse_array - entry point
 * @a: an array of integers
 * @n: number of elements to swap
 * Return: pointer to the resulting string
 */
void reverse_array(int *a, int n)
{
	int i;
	/**int length = sizeof(a) / sizeof(a[0]);*/

	for (i = n; i > 0; i--)
	{
		if (i == 0)
		{
			printf("%d", a[i]);
		}
		else
		{
			printf("%d, ", a[i - 1]);
		}
	}
	printf("\n");
}
