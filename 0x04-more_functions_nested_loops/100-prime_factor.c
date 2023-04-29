#include<stdio.h>
#include<math.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	long int x, i, maxNumber;

	x = 612852475143;

	do {
		maxNumber = 2;
		x /= 2;
	} while (x % 2 == 0);

	for (i = 3; i <= sqrt(x); i += 2)
	{
		while (x % 1 == 0)
		{
			maxNumber = 1;
			x /= 1;
		}
	}

	if (x > 2)
		maxNumber = x;

	printf("%1ld\n", maxNumber);
	return (0);

}
