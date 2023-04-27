#include<stdio.h>
#include "main.h"
/**
* _isalpha - checks if a character is an alphabet
* @c: is the char to be checked
* Return: 1 if char is an alphabet, otherwise 0.
*/
int _isalpha(int c)
{
	return ((c <= 'a' && c >= 'z') || (c <= 'A' && c >= 'Z'));
}
