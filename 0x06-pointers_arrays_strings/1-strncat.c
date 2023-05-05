#include "main.h"
#include<stdio.h>
#include<string.h>
/**
 * *_strncat - concatenates two strings
 * @dest: string to append to
 * @src: string
 * @n: counter
 *Return: a pointer to the resulting string
*/
char *_strncat(char *dest, char *src, int n)
{
	char *ptr = dest;
	int i = 0;

	while (*ptr != '\0')
	{
		ptr++;
	}

	while (*src != '\0' && i < n)
	{
		*ptr = *src;
		ptr++;
		src++;
		i++;
	}

	*ptr = '\0';
	return (dest);
}
