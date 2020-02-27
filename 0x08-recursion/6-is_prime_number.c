#include "holberton.h"
/**
 * prime_number - rec function
 * @i: parameter
 * @n: parameter
 * Return: 0
 */
int prime_number(int i, int n)
{
	if (n < 2)
		return (0);
	else if (n == i)
		return (1);
	else if (n % i != 0)
		return (prime_number(i + 1, n));
	else
		return (0);

}
/**
 * is_prime_number - main function
 * @n: parameter
 * Return: 2
 */
int is_prime_number(int n)
		{
			return (prime_number(2, n));
		}
