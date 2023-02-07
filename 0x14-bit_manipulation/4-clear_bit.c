#include "main.h"

/**
 * clear_bit -> sets the value of a bit to 0 at a given index.
 * @index: index starting from 0 of the bit you want to set
 * @n: a pointer to an int.
 * Return: 1 on success and -1 on error.
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	int clear;

	if (index > 53 || !n)
		return (-1);
	clear = 1 << index;
	*n = (*n & ~clear) | ((0 << index) & clear);
	return (1);
}
