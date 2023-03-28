#include "main.h"

/**
 * print_c - Prints a char.
 * @l: the arguments list.
 * Return: the amount of chars printed.
 */
int print_c(va_list l)
{
	_write(va_arg(l, int));
	return (1);
}

/**
 * print_s - Prints a char pointer.
 * @l: the arguments list.
 * Return: the amount of chars printed.
 */
int print_s(va_list l)
{
	char *s = va_arg(l, char *);
	int i = 0;

	if (s == NULL)
		s = "(null)";

	for (; s[i]; i++)
		_write(s[i]);

	return (i);
}

/**
 * print_percentage - Prints a percentage symbol.
 * @l: the arguments list.
 * Return: the amount of chars printed.
 */
int print_percentage(va_list l)
{
	(void) l;

  _write('%');
  return (1);
}
