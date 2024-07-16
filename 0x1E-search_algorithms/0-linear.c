#include <stdio.h>
#include <stdlib.h>
#include "search_algos.h"

/**
 * function that searches for a value in an arary of integers using linear search algorithm
 * Array is a pointer to the first elemnt of the array to search in
 * size is the number of elements in arry
 * value is the value to search for
 * Return :fisrt index where vlue is located
 * 	   -1 if value is not present or Array is NULL
 */

int linear_search(int *array, size_t size, int value)
{
	size_t i = 0;

	if (!array || size == 0)
		return (-1);

	for (i = 0; i < size; i++)
	{
		if (array[i] == value)
			return (i);
	}

	return (-1);
}
