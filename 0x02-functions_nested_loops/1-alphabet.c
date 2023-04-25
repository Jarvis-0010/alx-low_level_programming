#include<stdio.h>
#include<main.h>
/**
 * main - Entry point
 * Return: Always 0 (Success)
*/
int main(void)
{
	print_alphabet(void);
	return (0);
}
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
