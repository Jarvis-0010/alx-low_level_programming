#include<stdio.h>
/**
 * main - Entry point
 * Return: Always 0 (Success)
*/
int main(void)
{
	char alphabet = 'a';

	int i;

	for (i = 0; i < 26; i++)
	{
		putchar("%c", alphabet);
		alphabet++;
	}
	return (0);
}
