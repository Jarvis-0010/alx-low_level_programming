#include<stdio.h>
#include "main.h"
/**
 * print_alphabet_x10 - Entry point
 * Return: Always 0 (Success)
*/
void print_alphabet_x10(void)
{
	char alphabet[26] = "abcdefghijklmnopqrstuvwxyz";
	int i, j;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 26; j++)
		{
			putchar(alphabet[j]);
		}
		putchar('\n');
	}


}
