#include<stdio.h>
/**
 * main - Entry point
 * Return: Always 0 (Success)
*/
int main(void)
{
	char alphabet[26] = "abcdefghijklmnopqrstuvwxyz";
	char upperAlphabet[26] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";

	int i;

	for (i = 0; i < 26; i++)
	{
		putchar(alphabet[i]);
	}
	for (i = 0; i < 26; i++)
	{
		putchar(upperAlphabet[i]);
	}
	putchar('\n');
	return (0);
}
