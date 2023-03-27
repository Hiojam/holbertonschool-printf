#include "main.h"

/**
 * print_c - Prints a char.
 * @l: the arguments list.
 */
void print_c(va_list l)
{
	_write(va_arg(l, int));
}

/**
 * print_s - Prints a char pointer.
 * @l: the arguments list.
 */
void print_s(va_list l)
{
	char *s = va_arg(l, char *);
	int i = 0;

	for (; s[i]; i++)
		_write(s[i]);
}
