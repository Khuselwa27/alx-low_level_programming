#include "function_pointers.h"
#include <stdio.h>
/**
 * print_name - Prints the name using pointer to function
 * @name: Allows string to add
 * @f: The pointer to function
 * Return: nothing
 **/
void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return;

	f(name);
}
