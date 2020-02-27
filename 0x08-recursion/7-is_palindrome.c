#include "holberton.h"
/**
 * s_length - function to calculate str length
 * @s: parameter
 * Return: 0
 */
int s_length(char *s)
{
	if (*s != '\0')
		return (1 + s_length(s + 1));
	return (0);
}
/**
 * checking_for_palindrome - testing palindrome str
 * @s: par ameter
 * @i: parameter
 * Return: 0
 */
int checking_for_palindrome(char *s, int i)
{
	if (i <= 1)
		return (1);
	if (*s != s[i - 1])
		return (0);
	return (checking_for_palindrome(s + 1, i - 2));
}
/**
 * is_palindrome - main function
 * @s: parameter
 * Return: result of palindrome test
 */
int is_palindrome(char *s)
{
	return (checking_for_palindrome(s, s_length(s)));
}
