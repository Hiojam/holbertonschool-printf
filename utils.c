#include "main.h"
#include <limits.h>

/**
 * print_number - Prints a number
 * @n: Number to print.
 */
void print_number(int n)
{
	if (n < 0)
	{
		_write('-');
		n = -n;
	}

	if (n == 0)
	{
		_write('0');
		return;
	}

	if (n / 10)
		print_number(n / 10);

	_write(n % 10 + '0');
}

/**
 * num_places - Determines the number of digits an int has
 *
 * @n: Number to determine.
 * Return: Digits amount.
 */
int num_places(int n)
{
	if (n < 0)
		return (num_places((n == INT_MIN) ? INT_MAX : -n));
	if (n < 10)
		return (1);
	return (1 + num_places(n / 10));
}
