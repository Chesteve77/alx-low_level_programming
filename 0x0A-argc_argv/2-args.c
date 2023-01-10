#include <stdio.h>

/**
 * main -> function that prints it's name
 * @argc: argc parameter
 * @argv: an array of command
 * Return: 0 for success
 */
int main(int argc, char *argv[])
{
	int x;

	for (x = 0; x < argc; x++)
	{
		printf("%s\n", argv[x]);
	}
	return (0);
}
