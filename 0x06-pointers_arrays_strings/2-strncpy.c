#include "main.h"
#include<stdio.h>
#include<string.h>
/**
 * *_strncpy - concatenates two strings
 * @dest: string to append to
 * @src: string to add
 * @n: counter
 * Return: a pointer to the resulting string
*/
char *_strncpy(char *dest, char *src, int n)
{
	int i = 0;

	while (*src != '\0' && i < n)
	{
		*dest = *src;
		dest++;
		src++;
		i++;
	}

	while (i < n)
	{
		*dest = '\0';
		dest++;
		i++;
	}

	return (dest - 1);
}
