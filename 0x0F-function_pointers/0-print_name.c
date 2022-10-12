#include "function_pointers.h"

/**
 * print_name - prints a name
 * @name: name to be printed
 * @f: function to print the name with
 *
 * Return: void
 */
void print_name(char *name, void (*f)(char *))
{
	if (name != NULL && f != NULL)
		f(name);
}
