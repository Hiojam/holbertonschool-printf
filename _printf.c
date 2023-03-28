#include "main.h"

/**
 * _printlogic - PrintF logic.
 *
 * @format: Given string with the format.
 * @typesL: List with the allowed types.
 * @l: List of arguments.
 * Return: Amount of chars printed.
 */
int _printlogic(const char *format, types_args_t typesL[], va_list l)
{
	int i = 0, charsPrinted = 0, z;
	char c;

	for (; format[i]; i++)
	{
		c = format[i];
		if (c == '%')
		{
			for (z = 0; typesL[z].type; z++)
			{
				if (typesL[z].type == format[i + 1])
				{
					charsPrinted += typesL[z].f(l);
					break;
				}
			}
			i++;
			continue;
		}
		_write(c);
		charsPrinted++;
	}
	return (charsPrinted);
}

/**
 * _printf - PrintF function.
 *
 * @format: the format.
 * Return: int
 */
int _printf(const char *format, ...)
{
	va_list l;
	int charsPrinted = 0;
	types_args_t typesL[] = {
		{'c', print_c},
		{'s', print_s},
		{'%', print_percentage}
	};

	if (format == NULL)
		return (-1);

	va_start(l, format);

	charsPrinted = _printlogic(format, typesL, l);

	va_end(l);
	return (charsPrinted);
}
