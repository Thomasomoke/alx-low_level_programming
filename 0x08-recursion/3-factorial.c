# include <main.h>
/**
 * factorial- function that returns the factorial of a given number.
 * @n : integer to be passed
 * Return : -1 if n is lower than 0
 *         1 if n is 0 or 1
 *           otherwise return n * factorial(n - 1)
 */
int factorial(int n)
{
	if (n < 1)
		return (-1);
}
{
	if (n == 0 || n == 1)
		return (1);
}
	return (n * factorial(n - 1));
}

