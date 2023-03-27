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
	int i = 0, z = 0, isVal = 0, charsPrinted = 0;
	types_args_t typesL[] = {
		{'c', print_c},
		{'s', print_s},
		{'%', print_percentage}
	};

	va_start(l, format);

	for (; format[i]; i++)
	{
		c = format[i];
		if (c == '%')
		{
			for (z = 0; typesL[z].type; z++)
			{
				if (typesL[z].type == format[i + 1])
				{
					typesL[z].f(l);
					isVal = 1;
					charsPrinted++;
					break;
				}
			}
			if (isVal == 0)
				exit(100);
			isVal = 0;
			i++;
			continue;
		}
		_write(c);
		charsPrinted++;
	}

	va_end(l);
	return (charsPrinted);
}
