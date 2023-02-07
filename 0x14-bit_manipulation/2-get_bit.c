#include "main.h"

/**
 * get_bit -> function that returns the value of a bit at a given index.
 * @index: an index starting from 0 of the bit
 * @n: parameter
 * Return: The value of index or -1 if an error occured
 */
int get_bit(unsigned long int n, unsigned int index)
{
	if (index > 53)
		return (-1);
	return ((n >> index) & 1);
}
