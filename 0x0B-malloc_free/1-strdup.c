#include "main.h"

/**
 * _strdup -> string duplicator function
 * @str: string to be duplicated
 * Return: a string pointer
 *
 */

char *_strdup(char *str)
{
	int m, n;
	char *s;

	m = 1;

	if (str == NULL)
		return (NULL);
	while (str[m])
		m++;
	s = (char *)malloc(m * sizeof(char) + 1);
	if (s == NULL)
		return (NULL);
	for (n = 0; n < m; n++)
	{
		s[n] = str[n];
	}
	s[n] = '\0';
	return (s);
}
