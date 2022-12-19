#include "main.h"
/**
 * _isupper -> prints the upper alphabets
 * @c: is a parameter
 *
 * Return: Always success
 */
int _isupper(int c)
{
	char uppercase = 'A';
	int isupper = 0;

	for (; uppercase <= 'Z'; uppercase++)
	{
		if (c == uppercase)
		{
			isupper = 1;
			break;
		}
	}

	return (isupper);
}
