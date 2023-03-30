#include "main.h"

/**
 * print_b - Prints a binary number
 *
 * @l: the arguments list.
 * Return: the amount of chars printed.
 */
int print_b(va_list l)
{
	int num = va_arg(l, int);
	int binary = 0, i = 1;

	if (num < 0)
		return (0);
	
	while (num > 0)
	{
		binary += (num % 2) * i;
		num /= 2;
		i *= 10;
	}

	print_number(binary);

	return (num_places(binary));
}
