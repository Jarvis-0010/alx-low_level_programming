#include<stdio.h>
#include "main.h"
/**
 * *_memset - Entry point
 * @s: pointer
 * @b: variable
 * @n: variable
 * Return: char
*/
char *_memset(char *s, char b, unsigned int n)
{
	int i = 0;

	for (; n > 0; i++)
	{
		s[i] = b;
		n--;
	}
	return (s);
}
