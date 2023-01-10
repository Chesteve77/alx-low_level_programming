#include <stdio.h>

/**
 * main -> prints its name
 * @argc: parameter
 * @argv: an array of a listed command
 * Return: 0 for success
 */
int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", *argv);
	return (0);
}
