#include "main.h"
/**
 * print_last_digit-  function that prints the last digit of a number.
 * @r :value of the integer
 * return : last_digit
 */
int print_last_digit(int r)
{
	int last_digit = r % 10;

	if (last_digit < 0)
	{
		last_digit = -last_digit;
	}
	_putchar(last_digit);
	return (last_digit);
}

