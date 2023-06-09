#include<stdio.h>
#include "main.h"
/**
 * is_prime_number - Entry point
 * @n: input integer
 * Return: int
*/
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (actual_prime(n, n - 1));

}
/**
 * _actual_prime - calculates if a number is prime recursively
 * @n: number to evaluate
 * @i: iterator
 *
 * Return: 1 if n is prime, 0 if not
 */
int _actual_prime(int n, int i)
{
	if (i == 1)
		return (1);
	if (n % i == 0 && i > 0)
		return (0);
	return (_actual_prime(n, i - 1));
}

