#include "main.h"
#include <stdlib.h>

/**
* create_array -> A function that creates an array of chars,
* and initializes it with a spcific char.
* @size: The size of the array
* @c: A char to initialize array
* Return: A pointer to the array or NULL if it fails
*/
char *create_array(unsigned int size, char c)
{
	char *s;
	unsigned int i = 0;

	s = malloc(size * sizeof(char));

	if (s == NULL)
		return (NULL);

	if (size == 0)
		return (NULL);

	while (i < size)
	{
		s[i] = c;
		i++;
	}
	return (s);
}
