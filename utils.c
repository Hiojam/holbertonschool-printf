#include "main.h"
#include <limits.h>

/**
 * print_int - Prints a number
 * @n: Number to print.
 */
void print_number(int n)
{
	int base = 1, digit;

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

	while (n / base > 9)
		base *= 10;

	while (base > 0)
	{
		digit = n / base;
		n %= base;
		base /= 10;
		if (digit < 10)
			_write(digit + '0');
		else
			_write(digit - 10 + 'A');
	}
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
