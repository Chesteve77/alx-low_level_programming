#include "function_pointers.h"
#include <stdlib.h>

/**
 * int_index - function that searches for an integer
 * @array: array of an integer
 * @size: number of elements in the array
 * @cmp: pointer to the function to be used to compare values
 * Return: void
 */


int int_index(int *array, int size, int (*cmp)(int))

{
	int i, result;

	if (array == NULL || cmp == NULL)
		return (-1);

	if (size <= 0)
		return (-1);

	for (i = 0; i < size; i++)
	{
		result = cmp(array[i]);

		if (result == 1)
			return (i);
	}
	return (-1);
}
