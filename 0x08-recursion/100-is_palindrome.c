#include<stdio.h>
#include "main.h"
/**
 * is_palindrome - Entry point
 * @s: pointer
 * Return: int
*/
int is_palindrome(char *s)
{
	int is_palindrome(char *s)
{
	if (*s == 0)
		return (1);
	return (check_pal(s, 0, _strlen_recursion(s)));
}
/**
 * _strlen_recursion - Return length of the string
 * @s: string
 * Return: length
*/
int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	return (1 + _strlen_recursion(s + 1));
}
/**
 * check_palindrome - checks recursively for palindromes
 * @s: string
 * @i: iterator
 * @len: string length
 * Return: 1 if palindrome, 0 if not
 */
int check_palindrome(char *s, int i, int len)
{
	if (*(s + i) != *(s + len - 1))
		return (0);
	if (i >= len)
		return (1);
	return (check_palindrome(s, i + 1, len - 1));
}
}
