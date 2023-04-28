#include<stdio.h>
#include "main.h"
/**
 * _isdigit - Entry point
 * @c: value being tested
 * Return: Always 0 (Success)
*/
int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
