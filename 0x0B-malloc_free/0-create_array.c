#include "main.h"

/**
 * create_array -> creates an array of characters
 * @size: size of array to be created
 * @c: the character the array will be initialized with
 * Return: returns a pointer to an array or NULL if it fails
 *
 */

char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *s;

	if (size == 0)
		return (NULL);
	s = (char *)malloc(size * sizeof(char));
	if (s == NULL)
		return (NULL);
	for (i = 0; i < size; i++)
		s[i] = c;
	return (s);
}
