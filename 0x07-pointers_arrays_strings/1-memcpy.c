#include<stdio.h>
#include "main.h"
/**
 * *_memcpy - Entry point
 * @dest: pointer
 * @src: pointer
 * @n: variable
 * Return: char
*/
char *_memcpy(char *dest, char *src, unsigned int n)
{
	int j = 0;
	int i = n;

	for (; j < i; j++)
	{
		dest[j] = src[j];
		n--;
	}
	return (dest);

}
