#include "main.h"

/**
 * _printf - PrintF function.
 *
 * @format: the format.
 * Return: int
 */
int _printf(const char *format, ...)
{
	va_list l;
	char c;
	int i = 0, z = 0, charsPrinted = 0;
	types_args_t typesL[] = {
		{'c', print_c},
		{'s', print_s}
	};

	va_start(l, format);

	for (; format[i]; i++)
	{
		c = format[i];
		if (c == '%')
		{
			if (format[i + 1] == '%')
			{
				_write('%');
				i++;
				charsPrinted++;
				continue;
			}
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

	va_end(l);
	return (charsPrinted);
}
