#include <stdio.h>
#include "function_pointers.h"

/**
 * print_name - prints a name as is
 * @name: Name of the person
 * @f: Pointer to function that returns void
 * Return: Nothing.
 */
void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
	{
		return;
	}

	f(name);

}
