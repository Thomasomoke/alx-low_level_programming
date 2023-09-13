#include "main.h"

/**
 * 4-isalpha.c- checks if a cahracter is a letter either lowercase or uppercase
 * c- character to be checked
 * returns 1 if c is a letter,lowercase or uppercase
 * otherwise it returns 0
 */
int _isalpha(int c)
{
	if (c >='a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
