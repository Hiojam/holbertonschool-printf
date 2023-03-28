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
	int i = 0, charsPrinted = 0, z, found = 0;

	for (; format[i]; i++)
	{
		if (format[i] == '%')
		{
			if (format[i + 1] == '\0')
			{
				_write(format[i]);
				charsPrinted++;
				break;
			}

			for (z = 0; typesL[z].type; z++)
			{
				if (typesL[z].type == format[i + 1])
				{
					charsPrinted += typesL[z].f(l);
					found = 1;
					break;
				}
			}
			if (found == 0)
			{
				_write(format[i]);
				_write(format[i + 1]);
				charsPrinted += 2;
			}
			i++;
			found = 0;
			continue;
		}
		_write(format[i]);
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
		{'d', print_int},
		{'%', print_percentage}
	};

	if (format == NULL)
		return (-1);

	va_start(l, format);

	charsPrinted = _printlogic(format, typesL, l);

	va_end(l);
	return (charsPrinted);
}
