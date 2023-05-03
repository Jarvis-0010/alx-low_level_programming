#include "main.h"
#include<stdio.h>
/**
 * _atoi - Entry point
 * @s: string to be converted
 * Return: int
 */
int _atoi(char *s)
{
	int r = 0;
	int sign = 1;
	int i = 0;

	if (s[0] == '-')
	{
		sign = -1;
		i++;
	}
	for (; s[i] != '\0'; i++)
	{
		if (s[i] >= '0' && s[i] <= '9')
		{
			r = r * 10 + (s[i] - '0');
		}
		else
		{
			break;
		}
	}
	return (sign * r);
}
