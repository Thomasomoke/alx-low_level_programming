#include "main.h"
/**
 * swap_int-swps the values of two integers
 * @a :integer to swp
 * @b :integer to swap
 */
void swap_int(int *a, int *b)
{
	int m;

	m = *a;
	*a = *b;
	*b = m;
}
