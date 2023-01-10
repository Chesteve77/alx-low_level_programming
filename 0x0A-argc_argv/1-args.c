#include <stdio.h>

/**
 * main -> function that prints it's name
 * @argc: parameter
 * @argv: an array of listed commands
 * Return: 0 for success.
 */
int main(int argc, char *argv[] __attribute__((unused)))
{
	printf("%d\n", argc - 1);
	return (0);
}
