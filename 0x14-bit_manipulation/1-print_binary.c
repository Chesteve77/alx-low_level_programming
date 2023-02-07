#include "main.h"

/**
 * print_binary -> prints binary rep of a number
 * @n: parameter
 * Return: Success
 */

void print_binary(unsigned long int n)

{
	if (n > 1)
		print_binary(n >> 1);
	(n & 1) ? _putchar('1') : _putchar('0');
}
