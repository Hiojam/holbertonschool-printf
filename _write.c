#include "main.h"

/**
 * _write - Write function
 *
 * @c: char to be printed.
 * Return: 1 on success or -1 in case of an error.
 */
int _write(char c)
{
	return (write(1, &c, 1));
}
