#include<stdio.h>
/**
 * main - Entry point
 * Return: Always 0 (Success)
*/
int main(void)
{
	char alphabet[26] = "abcdefghijklmnopqrstuvwxyz";

	int i;

	for (i = 0; i < 26; i++)
	{
		if (alphabet[i] == alphabet[4])
		{
			continue;
		}
		if (alphabet[i] == alphabet[16])
		{
			continue;
		}
		putchar(alphabet[i]);
	}
	putchar('\n');
	return (0);
}
