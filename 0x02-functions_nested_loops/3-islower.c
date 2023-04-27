#include<stdio.h>
#include "main.h"
/**
* _islower - checks if character is in lowercase
* @c: character being checked
* Return: 1 if char is lowercase, otherwise 0.
*/
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
