#include<stdio.h>
#include "main.h"
/**
 * print_alphabet - Entry point
 * Return: Always 0 (Success)
*/
void print_alphabet(void)
{
	char alphabet[26] = "abcdefghijklmnopqrstuvwxyz";
	int i;

	for (i = 0; i < 26; i++)
	{
		putchar(alphabet[i]);
	}
	putchar('\n');
}
