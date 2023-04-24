#include<stdio.h>
/**
 * main - Entry point
 * Return: Always 0 (Success)
*/
int main(void)
{
	char numbers[10] = "0123456789";
	int i;

	for (i = 0; i <= 9; i++)
	{
		putchar(numbers[i]);
	}
	putchar('\n');
	return (0);
}
