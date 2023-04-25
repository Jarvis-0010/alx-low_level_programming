#include<stdio.h>
/**
 * main - Entry point
 * Return: Always 0 (Success)
*/
int main(void)
{
	char output[8] = "_putchar";
	int i;

	for (i = 0; i <= 9; i++)
	{
		putchar(output[i]);
	}
	putchar('\n');
	return (0);
}
