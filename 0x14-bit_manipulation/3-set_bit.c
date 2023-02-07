#include "main.h"

/**
 * set_bit -> sets the value of a bit to 1 at a given index.
 * @index: is the index, starting from 0 of the bit you want to set
 * @n: a pointer to an int.
 * Return: 1 if it worked and -1 if error occured
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > 53 || !n)
		return (-1);
	(*n |= 1 << index);
	return (1);
}
