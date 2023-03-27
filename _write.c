#include "main.h"

/**
 * _write - Write function
 *
 * @a: char to be printed.
 * Return: No. of bytes.
 */
int _write(int a)
{
	char *s;
	int i = 0;

	s = malloc(2);

	if (s == NULL)
		exit(100);

	s[0] = a;
	s[1] = '\0';

	for (; s[i]; i++)
		;

	return (write(1, s, i));
}
