#include<stdio.h>
#include <string.h>
/**
 * main - Entry point
 * Return: Always 0 (Success)
*/
int main(void)
{
	char alphabet[26] = "zyxwvutsrqponmlkjihgfedcba";

	int i;

	for (i = 0; i < 26; i++)
	{
		putchar(alphabet[i]);
	}
	putchar('\n');
	return (0);
}
